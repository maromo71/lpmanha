/*
1. Soma de Matrizes: Escreva um programa que leia duas matrizes 3x3 e calcule a
soma dessas matrizes. O programa deve imprimir a matriz resultante.
 */
#include <stdio.h>
#define T 3

int main(void) {
    int m1[T][T], m2[T][T], m3[T][T];
    //ler a primeira
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("Digite o valor de m1[%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    //ler a segunda
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("Digite o valor de m2[%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    //montar a terceira
    for (int i=0; i<T; i++){
        for (int j=0; j<T; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    //mostrar terceira matriz
    for (int i=0; i<T; i++){
      for (int j=0; j<T; j++){
        printf("[%4d] ", m3[i][j]);
      }
      printf("\n"); //pula uma linha
    }
    return 0;
}
