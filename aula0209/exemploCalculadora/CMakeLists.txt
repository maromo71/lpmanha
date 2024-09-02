cmake_minimum_required(VERSION 3.28)
project(exemploCalculadora C)

set(CMAKE_C_STANDARD 11)

add_executable(exemploCalculadora main.c
        calculadora.c
        calculadora.h)
