#include <stdio.h>
void inverterVetor(int vetor[], int tam);
void imprimirVetor(int vetor[], int tam);
int main() {
    int meuVetor[] = {3, 7, 11, 22};
    inverterVetor(meuVetor, 4);
    imprimirVetor(meuVetor, 4);
    return 0;
}
void imprimirVetor(int vetor[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("[%2d] ", vetor[i]);
    }
    printf("\n");
}
void inverterVetor(int vetor[], int tam){
    for(int i=0; i<tam/2; i++){//percorro até o meio do vetor
        int aux = vetor[i];
        vetor[i] = vetor[tam - i - 1];
        vetor[tam -i -1] = aux;
    }
}
