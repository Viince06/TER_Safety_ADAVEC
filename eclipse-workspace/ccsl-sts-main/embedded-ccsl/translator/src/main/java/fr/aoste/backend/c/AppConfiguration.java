package fr.aoste.backend.c;

import java.time.Duration;
import java.util.*;

public class AppConfiguration<Clock extends Comparable<Clock>> {
    public static class PinBinding<Clock> {
        public final Clock clock;
        public final int pin;
        public final PinMode mode;

        public PinBinding(Clock clock, int pin, PinMode mode) {
            this.clock = clock;
            this.pin = pin;
            this.mode = mode;
        }
    }

    public enum Target {
        // TODO: make targets check something
        INTERACTIVE,
        ARDUINO_UNO_REV3,
    }

    public final Target target;
    public final ArrayList<PinBinding<Clock>> bindings = new ArrayList<>();
    public final Map<Integer, Clock> pinsToClocks = new HashMap<>();
    public final Map<Clock, Duration> timers = new HashMap<>();

    public enum PinMode {
        INPUT, OUTPUT
    }

    public AppConfiguration(Target target) {
        this.target = target;
    }

    // TODO: pins can receive signals by different means: interruptions, one time check, etc. Should be configurable.
    public void bindClock(Clock clock, int pin, PinMode mode) {
        Clock bindClock = pinsToClocks.get(pin);
        if (bindClock != null) {
            throw new RuntimeException("pin " + pin + " is already bind to clock " + bindClock);
        }
        switch (mode) {
            case INPUT:
                if (bindings.stream().anyMatch((b)-> b.clock == clock && b.mode == PinMode.INPUT)) {
                    throw new RuntimeException("two pins cannot point to same clock "+ clock);
                }
                if (timers.get(clock) != null) {
                    throw new RuntimeException("cannot bind timer and pin to the same clock " + clock);
                }
                break;
            case OUTPUT:
                // OK to have few output pins
                break;
            default:
                throw new RuntimeException("unknown pin mode");
        }
        bindings.add(new PinBinding<>(clock, pin, mode));
        pinsToClocks.put(pin, clock);
    }

    // TODO: maybe better use Hz
    public void bindClock(Clock clock, Duration every) {
        // TODO: allow multiple clocks
        if (timers.size() > 0) {
            throw new RuntimeException("cannot have more than one clock for now");
        }
        if (bindings.stream().anyMatch((b)-> b.clock == clock && b.mode == PinMode.INPUT)) {
            throw new RuntimeException("cannot bind timer and pin to the same clock " + clock);
        }
        timers.put(clock, every);
    }

    public void checkClocks(Collection<Clock> specificationClocks) {
        Set<Clock> clocks = new TreeSet<>(specificationClocks);

        for (PinBinding<Clock> b: bindings) {
            if (!clocks.contains(b.clock)) {
                throw new RuntimeException("clock "+ b.clock + " was bind but do not exist in the specification");
            }
        }
    }
}