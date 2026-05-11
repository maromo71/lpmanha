#include <stdio.h>

int main(void) {
    int ma[3][2], mb[3][2], mc[3][2];
    //1 preencher a matriz A
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Matriz A. Digite o valor da posicao [%d][%d]\n", i, j);
            scanf("%d", &ma[i][j]);
        }
    }
    //2 preencher a matriz B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Matriz B. Digite o valor da posicao [%d][%d]\n", i, j);
            scanf("%d", &mb[i][j]);
        }
    }
    //3 calcular a matriz C resultante de ma[i][j] * mb[i][j]
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            mc[i][j] = ma[i][j] * mb[i][j];
        }
    }
    printf("Imprimindo a Matriz A \n");
    //4 exibir a matriz A
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%d] ", ma[i][j]);
        }
        printf("\n");
    }
    //5 exibir a matriz B
    printf("\nImprimindo a Matriz B \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%d] ", mb[i][j]);
        }
        printf("\n");
    }
    //6 exibir a matriz C resultante
    printf("\nImprimindo a Matriz C \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%d] ", mc[i][j]);
        }
        printf("\n");
    }
    return 0;
}