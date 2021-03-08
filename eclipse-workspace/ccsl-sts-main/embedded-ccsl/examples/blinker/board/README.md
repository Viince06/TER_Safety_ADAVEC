#Blinker

## Idea
On button pressed the program emits blinking, on second time button pressed blinking stops, synchronized with a specific clock.
The clock can be the Arduino Uno timer, as well as user-contolled.

## Build and upload

```bash
cd ./cmake-build-debug
cmake .. && make board-upload
```

## Requirements

`Arduino IDE` and `cmake` installed.

Some installation variant may require to change 
a path prefix to Arduino SDK in `./cmake/ArduinoToolchain.cmake` file.