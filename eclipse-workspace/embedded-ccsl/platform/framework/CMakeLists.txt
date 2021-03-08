cmake_minimum_required(VERSION 3.16)
project(framework C)

set(CMAKE_C_STANDARD 11)

add_library(framework library.c library.h external.h)