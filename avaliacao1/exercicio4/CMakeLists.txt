cmake_minimum_required(VERSION 3.26)
project(exercicio4 C)

set(CMAKE_C_STANDARD 11)

add_executable(exercicio4 main.c
        primos.c
        primos.h)
