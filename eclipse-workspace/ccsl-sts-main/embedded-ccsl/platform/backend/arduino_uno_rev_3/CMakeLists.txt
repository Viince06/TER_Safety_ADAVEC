cmake_minimum_required(VERSION 3.16)
project(arduino_uno_adapter C)

set(CMAKE_C_STANDARD 11)

include_directories(../../framework/ dependency/framework)
add_library(arduino_uno_adapter arduino_uno_adapter.c)