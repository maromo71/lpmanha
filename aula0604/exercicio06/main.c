#include <stdio.h>
//Leia um vetor de 10 números inteiros.
//Substitua todos os valores negativos
//por zero e todos os valores maiores
//que 100 por 100. Exiba o vetor resultante
int main(void) {
    int vetor[10];
    //percorrer para entrar com dados
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &vetor[i]);
    }
    //percorrer para trocar valores
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) vetor[i] = 0;
        if (vetor[i] >100) vetor[i] = 100;
    }
    //percorrer finalmente para exibir o vetor resultante
    for (int i = 0; i < 10; i++) {
        printf("[%d] ", vetor[i]);
    }
    return 0;
}
