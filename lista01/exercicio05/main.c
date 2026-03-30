/*
 * Escreva um programa que leia 05 números inteiros positivos.
 * Para cada número informado escrever a soma de seus
 * divisores (exceto ele mesmo)
*/
#include <stdio.h>

int main(void) {
    int n;
    for (int i=1; i<=5; i++) {
        do {
            printf("Digite o %d) valor: ", i);
            scanf("%d", &n);
        }while (!(n>0));
        int soma = 0; //zeramos para cada valor
        printf("Somando os valores: ");
        for (int j=1; j<n; j++) {
            if (n % j == 0) {
                printf("%d ", j);
                soma+= j;
            }
        }
        printf("\nSoma de seus divisores exatos: %d \n", soma);
    }

    return 0;
}