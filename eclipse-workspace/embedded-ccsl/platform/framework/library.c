#include "library.h"

// TODO:
//  - replace copy-loops with proper copy (can be platform specific)
//  - replace (re)initialization with proper functions (can be platform specific)

bool make_clock_transitions(const ConstraintGenerator *const constraints, State *const states,
                            const uint8_t *const input_events, uint8_t *const events) {
    State next_states[CONSTRAINTS_AMOUNT] = {};
    Transition transitions[CONSTRAINTS_AMOUNT] = {};
    enum ConstraintGeneratorResult result = CONSTRAINT_GENERATOR_NO_VARIANT;

    while (result != CONSTRAINT_GENERATOR_OK) {
        uint8_t fingerprints[EVENTS_BYTE_SIZE] = {0};

        for (int i = 0; i < EVENTS_BYTE_SIZE; ++i) {
            if (i < INPUT_EVENTS_BYTE_SIZE) {
                events[i] = input_events[i];
                fingerprints[i] = 0b11111111;
            } else {
                events[i] = 0;
            }
        }
        for (int i = 0; i < CONSTRAINTS_AMOUNT; ++i) {
            result = constraints[i](&states[i], &transitions[i], &next_states[i], events, fingerprints);
            if (result != CONSTRAINT_GENERATOR_OK) {
                if (i == 0) {
                    return false;
                }
                transitions[i - 1] += 1;
                transitions[i] = 0;
                break;
            }
        }
    }
    for (int i = 0; i < EVENTS_BYTE_SIZE; ++i) {
        events[i] = events[i];
    }
    for (int i = 0; i < CONSTRAINTS_AMOUNT; ++i) {
        states[i] = next_states[i];
    }
    return true;
}

void main_loop(const ConstraintGenerator *const constraints) {
    system_setup();

    uint8_t input_events[INPUT_EVENTS_BYTE_SIZE] = {0};
    uint8_t events[EVENTS_BYTE_SIZE] = {0};
    State states[CONSTRAINTS_AMOUNT] = {};

    bool ok;
    while (1) {
        ok = should_halt();
        if (ok) {
            halt();
            return;
        }
        collect_inputs(input_events);
        ok = make_clock_transitions(constraints, states, input_events, events);
        if (!ok) {
            panic();
            return;
        }
        update_differences(events);
        push_outputs(events);
    }
}


bool test(const uint8_t *events, const uint8_t* fingerprints, const size_t events_to_fire[], const bool should_fire[], const size_t array_size) {
    // TODO: probably can simplify
    for (int i = 0; i < array_size; ++i) {
        size_t event_num = events_to_fire[i];
        size_t offset = event_num / 8;
        uint8_t mask = 1 << (event_num % 8);
        uint8_t current_value = events[offset] & mask;
        uint8_t tested_value = should_fire[i] << (event_num % 8);
        uint8_t has_conflict = current_value ^ tested_value;
        uint8_t was_set_before = fingerprints[offset] & mask;
        if (has_conflict & was_set_before) {
            return false;
        }
    }
    return true;
}

void apply(uint8_t *events, uint8_t* fingerprints, const size_t events_to_fire[], const bool should_fire[], const size_t array_size) {
    for (int i = 0; i < array_size; ++i) {
        size_t event_num = events_to_fire[i];
        size_t offset = event_num / 8;
        uint8_t mask = 1 << (event_num % 8);
        if (should_fire[i]) {
            events[offset] |= mask;
        } else {
            events[offset] &= (~mask);
        }
        fingerprints[offset] |= mask;
    }
}