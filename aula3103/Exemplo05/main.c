/*
5. Multiplicação de uma matriz 2x2 por um número escalar
Exemplo, matriz lida
[1] [3]
[4] [5]

Escalar lido
2

Resultado
[2] [6]
[8] [10]

 */
#include <stdio.h>
#define T 2
int main(void) {
    int m[T][T];
    int escalar;
    printf("Digite o valor do escalar: [1..10]: \n");
    scanf("%d", &escalar);
    //ler a matriz
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("Digite o valor da linha %d e coluna %d: \n", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    //imprimir a matriz com o escalar
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("[%3d]", m[i][j] * escalar);
        }
        printf("\n");
    }
    return 0;
}