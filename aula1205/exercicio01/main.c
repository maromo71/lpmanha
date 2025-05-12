#include <stdio.h>
void lerVetor(int vetor[], int tamanho);
int encontrarMaior(int vetor[], int tamanho);
void imprimirVetor(int vetor[], int tamanho);
int main(void) {
    int vetor[10];
    lerVetor(vetor, 10);
    int maior = encontrarMaior(vetor, 10);
    printf("Maior valor: %d \n", maior);
    imprimirVetor(vetor, 10);
    return 0;
}

void lerVetor(int vetor[], int tamanho){
    for(int i =0; i<tamanho; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
}

int encontrarMaior(int vetor[], int tamanho){
    int maior = vetor[0];
    for(int i=0; i<tamanho; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
        }
    }
    return maior;
}
void imprimirVetor(int vetor[], int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("[%3d ]", vetor[i]);
    }
    printf("\n");
}
