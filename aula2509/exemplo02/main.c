#include <stdio.h>
#define T 5
int main(void) {
    int vetor[T] = {0};
    //1. Pedir os dados de entrada para o usuario
    for (int i = 0; i < T; i++) {
        printf("Insira %do) valor inteiro: ", i+1);
        scanf("%d", &vetor[i]);
    }
    //2. Encontrar qual eh o maior valor
    int maior = vetor[0];
    for (int i = 1; i<T; i++) {
        if (maior < vetor[i]) maior = vetor[i];
    }
    //3. Definir quantas vezes este maior esta presente no conjunto
    int cont = 0;
    for (int i = 0; i < T; i++) {
        if (vetor[i] == maior) cont++;
    }
    //4. Apresentar o resultado
    printf("Maior valor encontrado: %d.\nEle aparece: %d vez(es)\n", maior, cont);
    return 0;
}
