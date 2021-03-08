#include "library.h"
#include <Arduino.h>
#include "PinChangeInterrupt.h"

extern uint32_t *pin_counters;

void halt() {
}

void panic() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}

bool should_halt() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    return false;
}

#define GET_PIN(events, event_num, name) { \
    if (pin_counters[event_num] > 0){                          \
        events[event_num/8] |= (1 << (event_num % 8));   \
        pin_counters[event_num]--;                                        \
    } else {                                        \
        events[event_num/8] &= ~(1 << (event_num % 8));\
    }                                               \
}
#define PUSH_PIN(events, event_num, pin, name) { \
    if (events[event_num/8] & (1 << (event_num % 8))) { \
        digitalWrite(pin, HIGH);                          \
    } else {                                         \
        digitalWrite(pin, LOW);                          \
    }                                                \
}
#define SET_PIN_INPUT(pin,interrupt) {pinMode(pin, INPUT);attachPinChangeInterrupt(digitalPinToPinChangeInterrupt(pin), interrupt, RISING);}
#define SET_PIN_OUTPUT(pin) {pinMode(pin, OUTPUT);}
#define CLEAR_PIN(pin) {digitalWrite(pin, LOW);}