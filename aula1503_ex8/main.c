#include <stdio.h>
#include <stdlib.h>
#define TAM 7
/*
    Exemplo de uma matriz quadrada 7 x 7.
    Preenchida com o valor 0
    Ao final, exibir a matriz
*/
int main()
{
    int matriz[TAM][TAM] = {{0}};
    for(int i=0; i<TAM; i++){ //linha [i]
        for(int j=0; j<TAM; j++){ //coluna [j]
            printf("[%2d] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
