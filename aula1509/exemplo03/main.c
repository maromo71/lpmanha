#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 5
int main(void) {
    srand(time(NULL));
    int matriz[T][T] = {{0}};
    //gerar uma matriz triangular inferior
    for (int i = 0; i < T; i++) {
        for (int j = 0; j <=i; j++) {
            matriz[i][j] =(rand()) % 9 + 1;
        }
    }

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}