cmake_minimum_required(VERSION 3.29)
project(ProjetoAlunos C)

set(CMAKE_C_STANDARD 11)

add_executable(ProjetoAlunos main.c
        aluno.c
        aluno.h)
