#include <stdio.h>
void preencherVetor(int v[], int qtd);
void imprimirVetor(int v[], int qtd);
void imprimirReverso(int v[], int qtd);
int main() {
    int vetor[5];
    preencherVetor(vetor, 5);
    imprimirVetor(vetor, 5);
    imprimirReverso(vetor, 5);
    return 0;
}
void preencherVetor(int v[], int qtd){
    printf("Preenchendo um vetor com %d posições\n", qtd);
    for (int i = 0; i < qtd; ++i) {
        scanf("%d", &v[i]);
    }
}
void imprimirVetor(int v[], int qtd){
    printf("Imprimir o vetor com %d valores\n", qtd);
    for (int i = 0; i < qtd; ++i) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
void imprimirReverso(int v[], int qtd){
    printf("Imprimir o vetor de %d valores-> invertido\n", qtd);
    for (int i = qtd-1; i >=0 ; i--) {
        printf("%d ", v[i]);
    }
}