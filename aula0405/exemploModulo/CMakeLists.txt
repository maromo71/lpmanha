cmake_minimum_required(VERSION 4.2)
project(exemploModulo C)

set(CMAKE_C_STANDARD 11)

add_executable(exemploModulo main.c
        calculadora.c
        calculadora.h)
