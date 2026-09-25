#include <stdio.h>
#define T 10
int main(void) {
    int vetor[T]={0};
    //1. Entrada dos valores pelo usuario
    for (int i = 0; i < T; i++) {
        printf("Digite o %do) valor \n", i+1);
        scanf("%d", &vetor[i]);
    }
    //2. Percorrer e mostrar os impares
    for (int i = 0; i < T; i++) {
        if (vetor[i] % 2 == 1) printf("Valor impar: %d \n", vetor[i]);
    }
    //3. Percorrer e contar os pares
    int cont = 0;
    for (int i = 0; i < T; i++) {
        if (vetor[i] % 2 == 0) cont++
    }
    printf("Quantidade de pares: %d \n", cont);
    return 0;
}
