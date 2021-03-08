#ifndef APP_CONSTRAINTS_H
#define APP_CONSTRAINTS_H
#define EVENTS_BYTE_SIZE 2
#define INPUT_EVENTS_BYTE_SIZE 1
#define CONSTRAINTS_AMOUNT 8
#define STATE_BASE_TYPE int32_t
#define TRANSITION_BASE_TYPE int32_t
#define P99_PROTECT(...) __VA_ARGS__
#include <arduino_uno_adapter.c>
#include <library.c>
#include "variables.h"


enum ConstraintGeneratorResult generator_sts0(const State *const current_state,
                                                                  Transition *const transition,
                                                                  State *const next_state,
                                                                  uint8_t *const events,
                                                                  uint8_t *const fingerprints) {
	switch (*current_state) {
		case 0: goto state_0;
		case 1: goto state_1;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
state_0: switch (*transition) {
		case 0: goto s_0_t_0;
		case 1: goto s_0_t_1;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
s_0_t_0:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({0,8}), P99_PROTECT({true,true}), 2, transition, 0, next_state, 1)
s_0_t_1:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({0,8}), P99_PROTECT({false,false}), 2, transition, 1, next_state, 0)
	return CONSTRAINT_GENERATOR_NO_VARIANT;
state_1: switch (*transition) {
		case 0: goto s_1_t_0;
		case 1: goto s_1_t_1;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
s_1_t_0:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({0,8}), P99_PROTECT({true,false}), 2, transition, 0, next_state, 0)
s_1_t_1:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({0,8}), P99_PROTECT({false,false}), 2, transition, 1, next_state, 1)
	return CONSTRAINT_GENERATOR_NO_VARIANT;
	}




enum ConstraintGeneratorResult generator_sts1(const State *const current_state,
                                                                  Transition *const transition,
                                                                  State *const next_state,
                                                                  uint8_t *const events,
                                                                  uint8_t *const fingerprints) {
	switch (*current_state) {
		case 0: goto state_0;
		case 1: goto state_1;
		case 2: goto state_2;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
state_0: switch (*transition) {
		case 0: goto s_0_t_0;
		case 1: goto s_0_t_1;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
s_0_t_0:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({0,9}), P99_PROTECT({true,false}), 2, transition, 0, next_state, 1)
s_0_t_1:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({0,9}), P99_PROTECT({false,false}), 2, transition, 1, next_state, 0)
	return CONSTRAINT_GENERATOR_NO_VARIANT;
state_1: switch (*transition) {
		case 0: goto s_1_t_0;
		case 1: goto s_1_t_1;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
s_1_t_0:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({0,9}), P99_PROTECT({true,true}), 2, transition, 0, next_state, 2)
s_1_t_1:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({0,9}), P99_PROTECT({false,false}), 2, transition, 1, next_state, 1)
	return CONSTRAINT_GENERATOR_NO_VARIANT;
state_2: switch (*transition) {
		case 0: goto s_2_t_0;
		case 1: goto s_2_t_1;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
s_2_t_0:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({0,9}), P99_PROTECT({true,false}), 2, transition, 0, next_state, 1)
s_2_t_1:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({0,9}), P99_PROTECT({false,false}), 2, transition, 1, next_state, 2)
	return CONSTRAINT_GENERATOR_NO_VARIANT;
	}




enum ConstraintGeneratorResult generator_sts2(const State *const current_state,
                                                                  Transition *const transition,
                                                                  State *const next_state,
                                                                  uint8_t *const events,
                                                                  uint8_t *const fingerprints) {
	switch (*current_state) {
		case 0: goto state_0;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
state_0: switch (*transition) {
		case 0: goto s_0_t_0;
		case 1: goto s_0_t_1;
		case 2: goto s_0_t_2;
		case 3: goto s_0_t_3;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
s_0_t_0:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,11,9}), P99_PROTECT({true,true,false}), 3, transition, 0, next_state, 0)
s_0_t_1:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,11,9}), P99_PROTECT({false,true,true}), 3, transition, 1, next_state, 0)
s_0_t_2:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,11,9}), P99_PROTECT({true,true,true}), 3, transition, 2, next_state, 0)
s_0_t_3:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,11,9}), P99_PROTECT({false,false,false}), 3, transition, 3, next_state, 0)
	return CONSTRAINT_GENERATOR_NO_VARIANT;
	}




enum ConstraintGeneratorResult generator_sts3(const State *const current_state,
                                                                  Transition *const transition,
                                                                  State *const next_state,
                                                                  uint8_t *const events,
                                                                  uint8_t *const fingerprints) {
	switch (*current_state) {
		case 0: goto state_0;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
state_0: switch (*transition) {
		case 0: goto s_0_t_0;
		case 1: goto s_0_t_1;
		case 2: goto s_0_t_2;
		case 3: goto s_0_t_3;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
s_0_t_0:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({11,12,8}), P99_PROTECT({true,true,false}), 3, transition, 0, next_state, 0)
s_0_t_1:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({11,12,8}), P99_PROTECT({true,false,true}), 3, transition, 1, next_state, 0)
s_0_t_2:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({11,12,8}), P99_PROTECT({false,false,true}), 3, transition, 2, next_state, 0)
s_0_t_3:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({11,12,8}), P99_PROTECT({false,false,false}), 3, transition, 3, next_state, 0)
	return CONSTRAINT_GENERATOR_NO_VARIANT;
	}




enum ConstraintGeneratorResult generator_sts4(const State *const current_state,
                                                                  Transition *const transition,
                                                                  State *const next_state,
                                                                  uint8_t *const events,
                                                                  uint8_t *const fingerprints) {
	switch (*current_state) {
		case 0: goto state_0;
		case 1: goto state_1;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
state_0: switch (*transition) {
		case 0: goto s_0_t_0;
		case 1: goto s_0_t_1;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
s_0_t_0:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,12}), P99_PROTECT({true,false}), 2, transition, 0, next_state, 1)
s_0_t_1:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,12}), P99_PROTECT({false,false}), 2, transition, 1, next_state, 0)
	return CONSTRAINT_GENERATOR_NO_VARIANT;
state_1: switch (*transition) {
		case 0: goto s_1_t_0;
		case 1: goto s_1_t_1;
		case 2: goto s_1_t_2;
		case 3: goto s_1_t_3;
		case 4: goto s_1_t_4;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
s_1_t_0:
	if (a_minus_m == 1) {
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,12}), P99_PROTECT({false,true}), 2, transition, 0, next_state, 0)
	}
s_1_t_1:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,12}), P99_PROTECT({true,false}), 2, transition, 1, next_state, 1)
s_1_t_2:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,12}), P99_PROTECT({true,true}), 2, transition, 2, next_state, 1)
s_1_t_3:
	if (a_minus_m > 1) {
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,12}), P99_PROTECT({false,true}), 2, transition, 3, next_state, 1)
	}
s_1_t_4:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,12}), P99_PROTECT({false,false}), 2, transition, 4, next_state, 1)
	return CONSTRAINT_GENERATOR_NO_VARIANT;
	}




enum ConstraintGeneratorResult generator_sts5(const State *const current_state,
                                                                  Transition *const transition,
                                                                  State *const next_state,
                                                                  uint8_t *const events,
                                                                  uint8_t *const fingerprints) {
	switch (*current_state) {
		case 0: goto state_0;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
state_0: switch (*transition) {
		case 0: goto s_0_t_0;
		case 1: goto s_0_t_1;
		case 2: goto s_0_t_2;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
s_0_t_0:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,8}), P99_PROTECT({true,true}), 2, transition, 0, next_state, 0)
s_0_t_1:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,8}), P99_PROTECT({true,false}), 2, transition, 1, next_state, 0)
s_0_t_2:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,8}), P99_PROTECT({false,false}), 2, transition, 2, next_state, 0)
	return CONSTRAINT_GENERATOR_NO_VARIANT;
	}




enum ConstraintGeneratorResult generator_sts6(const State *const current_state,
                                                                  Transition *const transition,
                                                                  State *const next_state,
                                                                  uint8_t *const events,
                                                                  uint8_t *const fingerprints) {
	switch (*current_state) {
		case 0: goto state_0;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
state_0: switch (*transition) {
		case 0: goto s_0_t_0;
		case 1: goto s_0_t_1;
		case 2: goto s_0_t_2;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
s_0_t_0:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,9}), P99_PROTECT({false,true}), 2, transition, 0, next_state, 0)
s_0_t_1:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,9}), P99_PROTECT({true,false}), 2, transition, 1, next_state, 0)
s_0_t_2:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({10,9}), P99_PROTECT({false,false}), 2, transition, 2, next_state, 0)
	return CONSTRAINT_GENERATOR_NO_VARIANT;
	}




enum ConstraintGeneratorResult generator_sts7(const State *const current_state,
                                                                  Transition *const transition,
                                                                  State *const next_state,
                                                                  uint8_t *const events,
                                                                  uint8_t *const fingerprints) {
	switch (*current_state) {
		case 0: goto state_0;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
state_0: switch (*transition) {
		case 0: goto s_0_t_0;
		case 1: goto s_0_t_1;
		case 2: goto s_0_t_2;
		case 3: goto s_0_t_3;
		default: return CONSTRAINT_GENERATOR_NO_VARIANT;
}
s_0_t_0:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({1,12,13}), P99_PROTECT({false,true,false}), 3, transition, 0, next_state, 0)
s_0_t_1:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({1,12,13}), P99_PROTECT({true,false,false}), 3, transition, 1, next_state, 0)
s_0_t_2:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({1,12,13}), P99_PROTECT({true,true,true}), 3, transition, 2, next_state, 0)
s_0_t_3:
		APPLY_OR_GO_BLOCK(events, fingerprints, P99_PROTECT({1,12,13}), P99_PROTECT({false,false,false}), 3, transition, 3, next_state, 0)
	return CONSTRAINT_GENERATOR_NO_VARIANT;
	}


ConstraintGenerator constraints_generators[CONSTRAINTS_AMOUNT] = {generator_sts0,generator_sts1,generator_sts2,generator_sts3,generator_sts4,generator_sts5,generator_sts6,generator_sts7,};
void collect_inputs(uint8_t *input_events) {
GET_PIN(input_events,0, "p");
CLEAR_PIN(4);
GET_PIN(input_events,1, "t");
}

void push_outputs(const uint8_t *events) {
PUSH_PIN(events,13,4, "out");
delay(50);
}

uint32_t *pin_counters = (uint32_t[14]) {0};
void event_0_handler() {
pin_counters[0]++;
}

void system_setup() {
SET_PIN_INPUT(2,event_0_handler);
SET_PIN_OUTPUT(4);
    cli();//stop interrupts
    TCCR1A = 0;// set entire TCCR1A register to 0
    TCCR1B = 0;// same for TCCR1B
    TCNT1  = 0;//initialize counter value to 0
    // set compare match register for 1hz increments
    OCR1A = 31249;// = (16*10^6) / (0.5*1024) - 1 (must be <65536)
    // turn on CTC mode
    TCCR1B |= (1 << WGM12);
    // Set CS10 and CS12 bits for 1024 prescaler
    TCCR1B |= (1 << CS12) | (1 << CS10);
    // enable timer compare interrupt
    TIMSK1 |= (1 << OCIE1A);

sei();//allow interrupts
}

ISR(TIMER1_COMPA_vect){pin_counters[1]++;}
#endif //APP_CONSTRAINTS_H
