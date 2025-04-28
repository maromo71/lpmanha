#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    if (b) {
        return a / b;
    }
    printf("Erro de divisao por ZERO \n");
    exit(1);
}
