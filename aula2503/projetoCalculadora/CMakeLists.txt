cmake_minimum_required(VERSION 3.26)
project(projetoCalculadora C)

set(CMAKE_C_STANDARD 11)

add_executable(projetoCalculadora execCalculadora.c
        calculadora.c
        calculadora.h)
