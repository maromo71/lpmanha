/*
1. Escreva um programa que leia um vetor de 10 números inteiros e calcule e imprima a soma
de todos os seus elementos
 */
#include <stdio.h>
#include <stdlib.h>
#define T 10 //tamanho do vetor (T)
int main(void) {
    int v[T]; //vetor com T posicoes (T = 10)
    int soma = 0; //inicializa a variavel soma
    //ler o vetor, percorrer as posições de 0 a 9
    for (int i=0; i<T; i++){
        printf("Digite o valor da posicao [%d]: ", i);
        scanf("%d", &v[i]);
        soma+= v[i];
    }
    //nao foi pedido. Mas a impressao do vetor esta abaixo
    for (int i=0;i<T; i++) printf("Vetor v[%d] = %d\n", i, v[i]);
    printf("Somatoria final: %d \n", soma);
    return 0;
}