package fr.aoste.backend.c;

import fr.aoste.sync.*;
import fr.aoste.sync.compose.Binding;
import fr.aoste.sync.compose.ICCSLSpecificationComposer;
import fr.aoste.sync.vspec.BooleanExpression;

import java.io.IOException;
import java.io.Writer;
import java.time.Duration;
import java.util.*;

public class Translator implements ICCSLSpecificationComposer {
    final Aliases<String> aliases;
    final Writer constraintsWriter;
    final Writer variablesWriter;
    // TODO: use constants/macros maybe? will help greatly to read the constraints in generation
    final HashMap<String, Integer> eventsToNums;
    private int inputEventCount;
    final HashMap<Tuple<String, String>, String> differences = new HashMap<>();
    private AppConfiguration<String> configuration;

    public Translator(Aliases<String> aliases, Writer constraintsWriter, Writer variablesWriter, Map<String, Integer> inputEventsMap, AppConfiguration<String> configuration) {
        this.aliases = aliases;
        this.constraintsWriter = constraintsWriter;
        this.variablesWriter = variablesWriter;
        this.eventsToNums = new HashMap<>(inputEventsMap);
        this.inputEventCount = inputEventsMap.size();
        this.configuration = configuration;
        if (this.inputEventCount % 8 > 0) {
            this.inputEventCount = (this.inputEventCount / 8 + 1) * 8;
        }
    }

    @Override
    public SynchronousTransitionSystem treat(List<SynchronousTransitionSystem> systems, List<Binding> bindings, List<String> localClocks) {
        // FIXME: TOO MESSY!!! REFACTOR!!!
        HashSet<String> allEvents = new HashSet<>();
        for (Binding b : bindings) {
            allEvents.add(aliases.getBase(b.getName()));
        }
        int eventByteSize = 1;
        int nonInputEventsCount = allEvents.size() - eventsToNums.size();
        if (nonInputEventsCount % 8 > 0) {
            eventByteSize += 1;
        }
        eventByteSize += nonInputEventsCount / 8;

        // FIXME: bruh
        writeLineToConst("#ifndef APP_CONSTRAINTS_H");
        writeLineToConst("#define APP_CONSTRAINTS_H");
        writeLineToConst(String.format("#define EVENTS_BYTE_SIZE %d\n" +
                "#define INPUT_EVENTS_BYTE_SIZE %d\n" +
                "#define CONSTRAINTS_AMOUNT %d\n" +
                "#define STATE_BASE_TYPE int32_t\n" +
                "#define TRANSITION_BASE_TYPE int32_t", eventByteSize, inputEventCount / 8, systems.size()));
        writeLineToConst("#define P99_PROTECT(...) __VA_ARGS__");
        // FIXME: bruh...
        switch (configuration.target) {
            case INTERACTIVE:
                writeLineToConst("#include <interactive.c>");
                break;
            case ARDUINO_UNO_REV3:
                writeLineToConst("#include <arduino_uno_adapter.c>");
                break;
            default:
                throw new RuntimeException("unknown target");
        }
        writeLineToConst("#include <library.c>");
        writeLineToConst("#include \"variables.h\"");

        for (int i = 0; i < systems.size(); i++) {
            HashMap<String, String> localBindings = new HashMap<>();
            for (Binding b : bindings) {
                if (b.getSTSNumber() == i) {
                    localBindings.put(b.getFormalParameter(), aliases.getBase(b.getName()));
                }
            }
            for (Event e : systems.get(i).getEvents()) {
                String clockName = aliases.getBase(localBindings.get(e.getName()));
                assert clockName != null;
                if (this.eventsToNums.get(clockName) == null) {
                    this.eventsToNums.put(clockName, this.inputEventCount++);
                    assert this.inputEventCount < allEvents.size();
                }
            }
            translateSTS(i, systems.get(i), localBindings);
            writeLineToConst("\n");
        }
        {
            StringBuilder constrains_array = new StringBuilder();
            for (int i = 0; i < systems.size(); i++) {
                constrains_array.append(String.format("generator_sts%d", i));
                constrains_array.append(",");
            }
            writeLineToConst("ConstraintGenerator constraints_generators[CONSTRAINTS_AMOUNT] = {", constrains_array.toString(), "};");
        }
        generateIO();
        generateDifferences();
        generateSetup();
        writeLineToConst("#endif //APP_CONSTRAINTS_H");
        return null;
    }

    private void generateSetup() {
        writeLineToConst("uint32_t *pin_counters = (uint32_t[", Integer.toString(this.inputEventCount), "]) {0};");
        for (AppConfiguration.PinBinding<String> binding : this.configuration.bindings) {
            if (binding.mode == AppConfiguration.PinMode.INPUT) {
                String num = Integer.toString(this.eventsToNums.get(binding.clock));
                writeLineToConst("void event_", num, "_handler() {\npin_counters[", num, "]++;\n}\n");
            }
        }
        writeLineToConst("void system_setup() {");
        for (AppConfiguration.PinBinding<String> binding : this.configuration.bindings) {
            String handler = "event_" + this.eventsToNums.get(binding.clock) + "_handler";
            switch (binding.mode) {
                case INPUT:
                    writeLineToConst("SET_PIN_INPUT(", Integer.toString(binding.pin), ",", handler, ");");
                    break;
                case OUTPUT:
                    writeLineToConst("SET_PIN_OUTPUT(", Integer.toString(binding.pin), ");");
                    break;
            }
        }
        // TODO: make timers generic
        if (this.configuration.target == AppConfiguration.Target.ARDUINO_UNO_REV3) {
            assert this.configuration.timers.size() <= 1;

            for (Map.Entry<String, Duration> e : this.configuration.timers.entrySet()) {
                writeLineToConst("    cli();//stop interrupts\n" +
                        "    TCCR1A = 0;// set entire TCCR1A register to 0\n" +
                        "    TCCR1B = 0;// same for TCCR1B\n" +
                        "    TCNT1  = 0;//initialize counter value to 0\n" +
                        "    // set compare match register for 1hz increments\n" +
                        "    OCR1A = 31249;// = (16*10^6) / (0.5*1024) - 1 (must be <65536)\n" +
                        "    // turn on CTC mode\n" +
                        "    TCCR1B |= (1 << WGM12);\n" +
                        "    // Set CS10 and CS12 bits for 1024 prescaler\n" +
                        "    TCCR1B |= (1 << CS12) | (1 << CS10);\n" +
                        "    // enable timer compare interrupt\n" +
                        "    TIMSK1 |= (1 << OCIE1A);\n" +
                        "\n" +
                        "sei();//allow interrupts");
            }
        }
        writeLineToConst("}\n");
        if (this.configuration.target == AppConfiguration.Target.ARDUINO_UNO_REV3) {
            for (Map.Entry<String, Duration> e : this.configuration.timers.entrySet()) {
                writeLineToConst("ISR(TIMER1_COMPA_vect){pin_counters[", Integer.toString(this.eventsToNums.get(e.getKey())), "]++;}");
            }
        }
    }

    private void generateIO() {
        HashMap<Integer, String> numsToClocks = new HashMap<>();
        for (Map.Entry<String, Integer> e : eventsToNums.entrySet()) {
            numsToClocks.put(e.getValue(), e.getKey());
        }

        // input
        writeLineToConst("void collect_inputs(uint8_t *input_events) {");
        for (AppConfiguration.PinBinding<String> binding : configuration.bindings) {
            if (binding.mode == AppConfiguration.PinMode.INPUT) {
                writeLineToConst("GET_PIN(input_events,", this.eventsToNums.get(binding.clock).toString(), ", \"", binding.clock, "\");");
            } else {
                writeLineToConst("CLEAR_PIN(", Integer.toString(binding.pin), ");");
            }
        }
        for (Map.Entry<String, Duration> e : this.configuration.timers.entrySet()) {
            writeLineToConst("GET_PIN(input_events,", this.eventsToNums.get(e.getKey()).toString(), ", \"", e.getKey(), "\");");
        }
        writeLineToConst("}\n");

        // output
        writeLineToConst("void push_outputs(const uint8_t *events) {");
        for (AppConfiguration.PinBinding<String> binding : configuration.bindings) {
            if (binding.mode == AppConfiguration.PinMode.OUTPUT) {
                writeLineToConst("PUSH_PIN(events,", this.eventsToNums.get(binding.clock).toString(), ",", Integer.toString(binding.pin), ", \"", binding.clock, "\");");
            }
        }
        // TODO: should be configurable
        if (configuration.target == AppConfiguration.Target.ARDUINO_UNO_REV3) {
            writeLineToConst("delay(50);");
        }
        writeLineToConst("}\n");
    }

    // TODO: maybe there is better solution to writing formatted output?
    private void writeLineToConst(String... s) {
        try {
            for (String v : s) {
                this.constraintsWriter.write(v);
            }
            this.constraintsWriter.write("\n");
        } catch (IOException ex) {
            throw new RuntimeException(ex);
        }
    }

    private void writeLineToVars(String... s) {
        try {
            for (String v : s) {
                this.variablesWriter.write(v);
            }
            this.variablesWriter.write("\n");
        } catch (IOException ex) {
            throw new RuntimeException(ex);
        }
    }

    void translateSTS(int i, SynchronousTransitionSystem system, HashMap<String, String> bindings) {
        assert system.getFinal_() == null;

        HashMap<State, Integer> statesToNums = new HashMap<>();
        int j = 0;
        for (State s : system.getStates()) {
            assert j != 0 || s == system.getInitial();

            statesToNums.put(s, j++);
        }

        HashMap<State, ArrayList<Transition>> statesToTransitions = new HashMap<>();

        for (Transition t : system.getTransitions()) {
            statesToTransitions.computeIfAbsent(t.getSource(), k -> new ArrayList<>()).add(t);
        }

        writeLineToConst(String.format("\n\nenum ConstraintGeneratorResult generator_sts%d(const State *const current_state,\n" +
                "                                                                  Transition *const transition,\n" +
                "                                                                  State *const next_state,\n" +
                "                                                                  uint8_t *const events,\n" +
                "                                                                  uint8_t *const fingerprints) {", i));

        writeLineToConst("\tswitch (*current_state) {");
        for (State s : system.getStates()) {
            Integer stateNum = statesToNums.get(s);
            writeLineToConst(String.format("\t\tcase %d: goto state_%d;", stateNum, stateNum));
        }
        writeLineToConst("\t\tdefault: return CONSTRAINT_GENERATOR_NO_VARIANT;\n}");

        for (State s : system.getStates()) {
            ArrayList<Transition> transitions = statesToTransitions.get(s);

            Integer stateNum = statesToNums.get(s);
            writeLineToConst(String.format("state_%d: switch (*transition) {", stateNum));
            for (int k = 0; k < transitions.size() + 1; k++) {
                writeLineToConst(String.format("\t\tcase %d: goto s_%d_t_%d;", k, stateNum, k));
            }
            writeLineToConst("\t\tdefault: return CONSTRAINT_GENERATOR_NO_VARIANT;\n}");
            int transition = 0;
            for (Transition t : transitions) {
                compileTransition(system, bindings, statesToNums, stateNum, transition, t);
                transition++;
            }
            Transition emptyTransition = new Transition();
            emptyTransition.setTarget(s);
            emptyTransition.setTrigger(new Trigger());
            compileTransition(system, bindings, statesToNums, stateNum, transition, emptyTransition);
            writeLineToConst("\treturn CONSTRAINT_GENERATOR_NO_VARIANT;");
        }
        writeLineToConst("\t}");
    }

    private void compileTransition(SynchronousTransitionSystem system, HashMap<String, String> bindings, HashMap<State, Integer> statesToNums, Integer stateNum, int transition, Transition t) {
        HashMap<String, Boolean> events = new HashMap<>();
        for (Event e : system.getEvents()) {
            events.put(bindings.get(e.getName()), false);
        }
        for (Event e : t.getTrigger().getEvents()) {
            events.put(bindings.get(e.getName()), true);
        }
        StringBuilder events_literal = new StringBuilder();
        StringBuilder fire_literal = new StringBuilder();
        for (Map.Entry<String, Boolean> entry : events.entrySet()) {
            events_literal.append(eventsToNums.get(aliases.getBase(entry.getKey())).toString());
            fire_literal.append(entry.getValue().toString());
            events_literal.append(",");
            fire_literal.append(",");
        }
        events_literal.deleteCharAt(events_literal.length() - 1);
        fire_literal.deleteCharAt(fire_literal.length() - 1);

        Integer targetNum = statesToNums.get((State) t.getTarget());
        writeLineToConst(String.format("s_%d_t_%d:", stateNum, transition));
        BooleanExpression transitionGuard = t.getGuard();
        if (transitionGuard != null) {
            GuardVisitor visitor = new GuardVisitor(this.differences, bindings);
            StringBuilder result = (StringBuilder) transitionGuard.accept(visitor);
            writeLineToConst("\tif ", result.toString(), " {");
        }
        writeLineToConst(String.format("\t\tAPPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({%s}), P99_PROTECT({%s}), %d, transition, %d, next_state, %d)",
                events_literal.toString(), fire_literal.toString(), events.size(), transition, targetNum));

        if (transitionGuard != null) {
            writeLineToConst("\t}");
        }
    }

    void generateDifferences() {
        writeLineToVars("#ifndef APP_VARIABLES_H");
        writeLineToVars("#define APP_VARIABLES_H");
        differences.forEach((k, v) -> {
            writeLineToVars("static int32_t ", v, " = 0;");
        });

        writeLineToVars("void update_differences(const uint8_t *events) {");
        differences.forEach((k, v) -> {
            Integer leftNum = this.eventsToNums.get(k.x);
            writeLineToVars("\t", v, " += (events[", Integer.toString(leftNum / 8), "] & (1 << ", Integer.toString(leftNum % 8), "))? 1 : 0;");
            Integer rightNum = this.eventsToNums.get(k.y);
            writeLineToVars("\t", v, " -= (events[", Integer.toString(rightNum / 8), "] & (1 << ", Integer.toString(rightNum % 8), "))? 1 : 0;");
        });
        writeLineToVars("}");
        writeLineToVars("#endif //APP_VARIABLES_H");
    }
}
