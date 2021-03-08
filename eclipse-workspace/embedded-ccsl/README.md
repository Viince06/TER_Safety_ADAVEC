# embedded-ccsl

The structure of the subproject:
- [platform](./platform) &mdash; interface library and adapters to 2 platforms: console and Arduino Uno;
- [translator](./translator) &mdash; compiler of CCSL to C, uses Eclipse plugin to obtain specification description;
- [blinker](./examples/blinker) &mdash; contains example of a specification, compiled by the translator;
    has two variants: one for console, one for Arduino Uno.
