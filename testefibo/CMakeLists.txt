cmake_minimum_required(VERSION 3.26)
project(testefibo C)

set(CMAKE_C_STANDARD 11)

add_executable(testefibo main.c
        fibo.c
        fibo.h)
