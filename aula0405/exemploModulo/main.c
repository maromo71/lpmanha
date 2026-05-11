#include <stdio.h>
#include "calculadora.h"


int main(void) {
    int valor1 = 10;
    int valor2 = 20;

    printf("Soma: %d\n", somar(valor1, valor2));
    printf("Subtrair: %d\n", subtrair(valor1, valor2));
    printf("Multiplicar: %d\n", multiplicar(valor1, valor2));
    printf("Dividir: %d\n", dividir(valor1, valor2));
    return 0;
}

