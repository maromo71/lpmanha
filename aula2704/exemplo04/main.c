#include <stdio.h>

int main(void) {
    int n;
    printf("Entre com um numero inteiro: \n");
    scanf("%d", &n);
    printf("Nossa matriz sera de %d X %d\n", n, n);
    int matriz[n][n];
    printf("Abaixo matriz identidade: \n");
    //Algoritmo para montar a matriz identidade
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            }else {
                matriz[i][j] = 0;
            }
        }
    }

    //Imprimir a matriz identidade
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
