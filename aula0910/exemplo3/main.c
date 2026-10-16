#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
int main(void) {
    srand(time(NULL));
    int matriz[TAM][TAM]={{0}};
    for (int i = 0; i < TAM; i++) {
        for (int j = i; j < TAM; j++) {
            matriz[i][j] = (rand() % 10)+1;
        }
    }
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("[%3d] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
