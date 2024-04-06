#include <stdio.h>
#include <stdlib.h>
#include "primos.h"
int main() {
    int inicio, fim;

    printf("Digite dois números (inicial e final) para encontrar os números primos no intervalo: \n");
    scanf("%d %d", &inicio, &fim);
    if(inicio <2 || inicio > fim){
        printf("Impossivel encontrar nesta faixa\n");
        exit(1);
    }
    printf("Números primos entre %d e %d são:\n", inicio, fim);
    printPrimesBetween(inicio, fim);
    return 0;
}
