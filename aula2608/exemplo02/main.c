#include <stdio.h>

int main(void) {
    //matriz 3 linhas e 4 colunas (3x4)
    int matriz[3][4] = {{0}};
    //percorrer
    for (int i = 0; i < 3; ++i) {
        //imprindo as colunas
        for (int j = 0; j < 4; ++j) {
            printf("[%2d] ", matriz[i][j]);
        }
        //pulando uma linha
        printf("\n");
    }
    
    return 0;
}
