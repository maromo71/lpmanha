cmake_minimum_required(VERSION 4.0)
project(exemploAluno C)

set(CMAKE_C_STANDARD 11)

add_executable(exemploAluno main.c
        aluno.c
        aluno.h)
