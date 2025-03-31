/*
4.Desenvolva um programa que leia um vetor com 20 números. Em seguida, determine e
imprima quantos valores pares e ímpares ele possui. */
#include <stdio.h>
#define T 20
int main(void) {
    int v[T];
    //ler o vetor
    for (int i=0; i<T; i++) {
        printf("Digite o valor da pos[%d]: ", i);
        scanf("%d", &v[i]);
    }
    int pares=0, impares=0;
    for (int i=0; i<T; i++){
        if (v[i] % 2 == 0) {
            pares++;
        }
    }
    impares = T - pares;
    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);
    return 0;
}