//
// Created by memar on 16/10/2026.
//
#include "calculadora.h"
#include <stdio.h>
#include <stdlib.h>

int somar(int x, int y) {
    return x+y;
}

int subtrair(int x, int y) {
    return x-y;
}

int multiplicar(int x, int y) {
    return x*y;
}

int dividir(int x, int y) {
    if (y!=0) return x/y;
    printf("Impossivel dividir por ZERO\n");
    exit(1);
}
