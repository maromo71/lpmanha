/*
* 5. Escreva um programa que leia um vetor de 12 posições. Substitua todas as posições que
contêm um valor negativo por zero. Ao final, imprima o vetor modificado.
 */
#include <stdio.h>
#define T 12
int main(void) {
    int v[T]; //vetor de T (12) posicoes
    for (int i=0; i<T; i++) {
        printf("Digite um valor inteiro positivo ou negativo: ");
        scanf("%d", &v[i]);
    }
    //preencher com 0 (ZERO) a posicao que contiver numero negativo
    //varrer o vetor a procura de elemento menor que ZERO e substituir por ZERO
    for (int i = 0; i < T; ++i) {
        if (v[i]<0) {
            v[i]=0;
        }
    }
    //apresentar os dados
    for (int i = 0; i < T; ++i) {
        printf("[%d] ", v[i]);
    }
    printf("\n"); //apenas pular uma linha
    return 0;
}