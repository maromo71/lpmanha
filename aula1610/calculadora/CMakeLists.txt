cmake_minimum_required(VERSION 4.3)
project(calculadora C)

set(CMAKE_C_STANDARD 11)

add_executable(calculadora main.c
        calculadora.c
        calculadora.h)
