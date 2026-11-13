cmake_minimum_required(VERSION 4.3)
project(exemplo01 C)

set(CMAKE_C_STANDARD 11)

add_library(exemplo01 STATIC library.c)
