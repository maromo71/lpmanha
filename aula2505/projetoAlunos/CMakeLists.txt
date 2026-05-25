cmake_minimum_required(VERSION 4.2)
project(projetoAlunos C)

set(CMAKE_C_STANDARD 11)

add_executable(projetoAlunos main.c
        aluno.c
        aluno.h)
