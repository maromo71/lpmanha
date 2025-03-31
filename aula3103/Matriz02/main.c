/*
*2. Diagonal Principal: Desenvolva um programa que leia
*   uma matriz 4x4 e imprima a sua diagonal principal.
 */
#include <stdio.h>
#include <stdlib.h>
#define T 4
int main(void) {
    int m[T][T];
    //ler os valores
    for (int i=0; i<T; i++) {
        for (int j = 0; j < T; j++){
            printf("Digite o valor da coordenada [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    //imprimir a diagonal principal
    for (int i=0; i<T; i++){
        printf("[%d ]", m[i][i]); //imprimindo em uma unica linha
    }
    printf("\n"); //simplemente pular uma linha
    return 0;
}