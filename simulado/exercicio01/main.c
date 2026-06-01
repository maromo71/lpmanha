#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 5
int somar(int matriz[DIM][DIM]);
void gerar(int matriz[DIM][DIM]);
void imprimir_valores(int matriz[DIM][DIM]);
int main(void) {
    srand(time(NULL));
    int matriz[DIM][DIM];
    gerar(matriz);
    int soma = somar(matriz);
    printf("Soma da diagonal principal: %d \n", soma);
    imprimir_valores(matriz);
    return 0;
}
void gerar(int matriz[DIM][DIM]) {
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            matriz[i][j] = (rand() % 10)+1;
        }
    }
}
int somar(int matriz[DIM][DIM]) {
    //soma dos valores acima da diagonal principal
    int soma = 0;
    for (int i = 0; i < DIM; i++) {
        for (int j = i+1; j < DIM; j++) {
            soma+= matriz[i][j];
        }
    }
    return soma;
}
void imprimir_valores(int matriz[DIM][DIM]) {
    int maior = matriz[0][0];
    for (int j = 1; j < DIM; j++) {
        if (matriz[0][j] > maior) maior = matriz[0][j];
    }
    //multiplicar o maior valor pela diagonal secundaria
    for (int i = 0, j = DIM -1; i < DIM; i++, j--) {
        int result = matriz[i][j] * maior;
        printf("%2d X %2d = %3d\n", maior, matriz[i][j], result);
    }
    printf("\n");
    //imprimir matriz original
    for (int i=0; i<DIM; i++) {
        for (int j=0; j<DIM; j++) {
            printf("[%3d] ", matriz[i][j]);
        }
        printf("\n");
    }
}
