#include <stdio.h>

int main(void) {
    double soma = 0.0;
    int numerador = 1, denominador = 1;
    for (int i = 1; i <= 30; i++) {
        soma = soma + (double)numerador / denominador;
        numerador = numerador + 2;
        denominador = denominador + 1;
    }
    printf("Resultado da soma: %.2lf\n", soma);
    return 0;
}
