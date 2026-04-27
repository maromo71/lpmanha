#include <stdio.h>

int main(void) {
    int matrizA[4][3], matrizB[4][3];
    //1. pedir dados para a matrizA
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            //por cada coluna, peco o valor
            printf("Digite um valor inteiro: \n");
            scanf("%d", &matrizA[i][j]);
            //dobrar o valor para linha e coluna
            //rescpectiva na matrizB
            matrizB[i][j] = matrizA[i][j] * 2;
        }
    }
    //imprimir a MatrizA
    printf("Dados da Matriz A: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d] ", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\nDados da Matriz B: \n");
    //imprimir a MatrizB
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d] ", matrizB[i][j]);
        }
        printf("\n");
    }
    return 0;
}
