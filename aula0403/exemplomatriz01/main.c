#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int sena[5][6];
    //para cada cartela (5) 1. for
    for (int i = 0; i < 5; i++) {
        //cada valor da cartela, abaixo
        for (int j = 0; j < 6; ++j) {
            sena[i][j] = (rand() % 60) + 1;
        }
    }
    //impressao
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("[%2d] ", sena[i][j]);
        }
        printf("\n"); //pular uma linha para a prox cartela
    }
    return 0;
}
