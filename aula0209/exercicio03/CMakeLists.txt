cmake_minimum_required(VERSION 3.28)
project(exercicio03 C)

set(CMAKE_C_STANDARD 11)

add_executable(exercicio03 main.c
        inversor.c
        inversor.h)
