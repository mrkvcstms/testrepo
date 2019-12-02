cmake_minimum_required(VERSION 3.14)
project(testproject C)

set(CMAKE_C_STANDARD 99)

add_executable(testproject main.c ../cheer.c ../cheer.h)