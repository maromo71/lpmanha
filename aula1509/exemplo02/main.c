#include <stdio.h>
#define T 5
int main(void) {
    int matriz[T][T] = {{0}};
    //codigo para o algoritmo
    for (int i = 0; i < T; i++) {
        matriz[i][i] = 1;
    }
    //cogigo para imprimir
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}