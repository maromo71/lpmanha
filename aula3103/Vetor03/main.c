/*
3. Crie um programa que leia um vetor de 15 números inteiros e o apresente invertido. Por
exemplo, se o vetor de entrada for [1,2,3,...,15], a saída deve ser [15,14,13,...,1].
 */
#include <stdio.h>
#define T 15 //tamanho do vetor
int main(void) {
    int v[T]; //vetor de T posicoes
    //ler T valores
    for (int i=0; i<T; i++) {
        printf("Digite o valor da posicao [%d]\n", i);
        scanf("%d", &v[i]);
    }
    //impressao invertida
    for (int i=T-1; i>=0; i--) {
        printf("%d ", v[i]);
    }
    printf("Acabou\n");
    return 0;
}