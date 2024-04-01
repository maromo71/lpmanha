#include <stdio.h>
int contaElementosDistintos(const int vetor[], int tamanho);
int main() {
    int vetor[] = {3,7,3,1,7,10,11};
    printf("Qtd de Distintos: %d \n", contaElementosDistintos(vetor, 7));
}
int contaElementosDistintos(const int vetor[], int tamanho) {
    int i, j, distintos = 0, ehDistinto;
    for (i = 0; i < tamanho; i++) {
        ehDistinto = 1;
        for (j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                ehDistinto = 0; // Encontra um elemento repetido
                break;
            }
        }
        distintos += ehDistinto; // Incrementa se o elemento for distinto
    }
    return distintos;
}
