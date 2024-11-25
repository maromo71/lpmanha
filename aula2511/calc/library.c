#include "library.h"

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

/**
 *
 * @param a Valor inteiro
 * @param b Valor inteiro
 * @return A divisão inteira. Caso o valor de b seja 0, retorna -1
 */
int divisao(int a, int b) {
    return b ? a/b : -1;
}

int multiplicacao(int a, int b) {
    return a * b;
}
