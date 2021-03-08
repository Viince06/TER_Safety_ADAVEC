cmake_minimum_required(VERSION 3.16)
project(interactive C)

set(CMAKE_C_STANDARD 11)

include_directories(../../framework/ dependency/framework)
add_library(interactive interactive.c)