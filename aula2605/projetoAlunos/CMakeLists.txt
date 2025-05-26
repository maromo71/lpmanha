cmake_minimum_required(VERSION 3.31)
project(projetoAlunos C)

set(CMAKE_C_STANDARD 11)

add_executable(projetoAlunos app.c
        aluno.c
        aluno.h)
