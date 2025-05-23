/*
* 4 Maior Valor de uma Matriz: Elabore um programa que leia uma matriz 5x5.
*  programa deve encontrar e imprimir o maior valor da matriz e sua respectiva
*  posição (linha e coluna).
 */
#include <stdio.h>
#define T 5
int main(void) {
    int m[T][T];
    //ler
    for (int i = 0; i < T; i++) {
        for (int j=0; j < T; j++) {
            printf("Digite o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
    //maior elemento
    int maior = m[0][0];
    int linha=0, coluna=0;
    for (int i = 0; i < T; i++) {
        for (int j=0; j < T; j++) {
            if (m[i][j] > maior) {
                maior = m[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    printf("O maior elemento da matriz e: %d\n", maior);
    printf("Ele esta na linha %d e coluna %d\n", linha+1, coluna+1); //Somei um para facilitar a leitura para o usuario
    return 0;
}