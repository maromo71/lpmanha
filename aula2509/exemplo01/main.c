#include <stdio.h>
#define T 5
int main(void) {
    //vetor chamado valor com 10 posicoes de inteiros
    int valor[T] = {0};//completa da segunda em diante com 0.
    //percorrer e imprimir os valores do vetor
    for (int i = 0; i < T; i++) {
        printf("[%2d]",  valor[i]);
    }


    return 0;
}
