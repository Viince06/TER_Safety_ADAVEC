#include "stdio.h"
#include "library.h"

#define GET_PIN(events, event_num, name) { \
    printf("❖ fire event \"%s\"? y/n:", name);        \
    char input[256] = {0};                          \
    while(1){                                       \
        fgets(input, 255, stdin);               \
        uint8_t result = 0;                                            \
        if (input[0] == 'y') {                      \
            events[event_num/8] |= (1 << (event_num % 8)); \
            break;                                 \
        } else if (input[0] == 'n') {               \
            events[event_num/8] &= ~(1 << (event_num % 8)); \
            break;                                 \
        } else {                                    \
            continue;                                   \
        }                                           \
    }                                                \
}
#define PUSH_PIN(events, event_num, pin, name) { \
    if (events[event_num/8] & (1 << (event_num % 8))) { \
        printf("❖ %s\n", name);                          \
    } else {                                         \
        printf("❖ !%s\n", name);                          \
    }                                                \
}
#define SET_PIN_INPUT(pin,interrupt) {}
#define SET_PIN_OUTPUT(pin) {}
#define CLEAR_PIN(pin) {}

void halt() {
    printf("❖ program finished\n");
}

void panic() {
    printf("❖ program panicked\n");
}

bool should_halt() {
    printf("❖ exit? q/-:");
    char input[256] = {0};
    fgets(input, 255, stdin);
    if (input[0] == 'q') {
        return true;
    } else {
        return false;
    }
}
