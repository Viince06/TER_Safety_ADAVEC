#ifndef PLATFORM_LIBRARY_H
#define PLATFORM_LIBRARY_H

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

typedef STATE_BASE_TYPE State;
typedef TRANSITION_BASE_TYPE Transition;

enum ConstraintGeneratorResult {
    CONSTRAINT_GENERATOR_OK, CONSTRAINT_GENERATOR_NO_VARIANT
};

typedef enum ConstraintGeneratorResult (*ConstraintGenerator)(const State *const current_state,
                                                              Transition *const transition,
                                                              State *const next_state,
                                                              uint8_t *const events,
                                                              uint8_t *const fingerprints);

bool make_clock_transitions(const ConstraintGenerator *constraints, State *states,
                            const uint8_t *input_events, uint8_t *events);


extern void system_setup();

extern void halt();

extern void collect_inputs(uint8_t *input_events);

extern bool should_halt();

extern void update_differences(const uint8_t *events);

extern void push_outputs(const uint8_t *events);

extern void panic();

void main_loop(ConstraintGenerator const *constraints);

bool test(const uint8_t *events, const uint8_t* fingerprints, const size_t events_to_fire[], const bool should_fire[], size_t array_size);

void apply(uint8_t *events, uint8_t* fingerprints, const size_t events_to_fire[], const bool should_fire[], size_t array_size);

#define APPLY_OR_GO_BLOCK(events, fingerprints, events_array, firing_array, array_size, transition, trans_num, next_state, next_state_num) \
{                                                                                                                                      \
    size_t evt[] = events_array;                                                           \
    bool fire[] = firing_array;                                                           \
    if (test(events, fingerprints, evt, fire, array_size)) { \
        apply(events, fingerprints, evt, fire, array_size);  \
        *transition = trans_num;  \
        *next_state = next_state_num; \
        return CONSTRAINT_GENERATOR_OK; \
    } \
}
#endif //PLATFORM_LIBRARY_H
