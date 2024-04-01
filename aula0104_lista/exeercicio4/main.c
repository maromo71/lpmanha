#include <stdio.h>
int encontrarMaior(int vetor[], int tam);
int encontrarMenor(int vetor[], int tam);
int main() {
    int vetor[7] = {12, 31, 22, 44, 1, 5, 7};
    printf("Maior valor: %d \n", encontrarMaior(vetor, 7));
    printf("Menor valor: %d \n", encontrarMenor(vetor, 7));
}
int encontrarMaior(int vetor[], int tam) {
    int maior = vetor[0];
    for(int i=1; i<tam; i++){
        if(maior < vetor[i]) maior = vetor[i];
    }
    return maior;
}
int encontrarMenor(int vetor[], int tam){
    int menor = vetor[0];
    for (int i = 1; i < tam; i++) {
        if(menor > vetor[i]) menor = vetor[i];
    }
    return menor;
}
