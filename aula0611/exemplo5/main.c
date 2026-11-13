#include <stdio.h>

void print_vector(int *p_v, int n);
void print_inverser_vector(int *p_v, int n);

int main(void) {
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_vector(vetor, 10);
    printf("\n");
    print_inverser_vector(vetor, 10); //prim. posicao + quantidade
    return 0;+
}

void print_vector(int *p_v, int n) {
    //percorrer a quantidade de elementos que tenho no vetor
    for (int i = 0; i < n; i++) {
        printf("[%d]  ", *p_v++); //imprimir e deslocar p prox
    }
}
void print_inverser_vector(int *p_v, int n) {
    int * p_final = p_v + (n-1);
    for (int i = 0; i < n; i++) {
        printf("[%d]  ", *p_final--); //imprimir e deslocar p ante
    }
}