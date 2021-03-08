#include <Arduino.h>
#include "constraints.h"
#include "PinChangeInterrupt.h"

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    system_setup();
}

void loop() {
    main_loop(constraints_generators);
}
