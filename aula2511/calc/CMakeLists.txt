cmake_minimum_required(VERSION 3.29)
project(calc C)

set(CMAKE_C_STANDARD 11)

add_library(calc SHARED library.c)

set_target_properties(calc PROPERTIES
        OUTPUT_NAME "calc" # Nome da biblioteca
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib" # Pasta de saída
)