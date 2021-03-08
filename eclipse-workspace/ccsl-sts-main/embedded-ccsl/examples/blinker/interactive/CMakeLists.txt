cmake_minimum_required(VERSION 3.17)
project(blinker C)

set(CMAKE_C_STANDARD 99)

include_directories(../../../platform/framework dependency/framework)
include_directories(../../../platform/backend/interactive dependency/interactive)

add_executable(blinker main.c variables.h constraints.h)

target_compile_options(blinker PRIVATE -fstack-usage -fdump-rtl-expand)
set( CMAKE_VERBOSE_MAKEFILE on )
set(CMAKE_EXPORT_COMPILE_COMMANDS on)