#include <stdio.h>
/*
*Verificação de Primos: Escreva um programa que armazene
*10 números em um vetor e, ao final,  mostre apenas os
* números que são primos e suas respectivas posições
* */
int main(void) {
    int vetor[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor: \n");
        scanf("%d", &vetor[i]);
    }
    //verificar quais são primos mostra-los e sua respectiva posicao
    //para isso varrer o vetor e inspecionar se o valor eh primo ou nao
    //caso o valor na posicao corrente for primo exibir o valor e sua posicao
    for (int i=0; i<10; i++) {
        int primo = 1; //todo numero (pode) ser primo
        for (int j=2; j<vetor[i]/2; j++) {
            if (vetor[i] % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("Num: [%d] esta na posicao [%d] eh primo\n", vetor[i], i);
        }else {
            printf("Num: [%d] nao eh primo \n", vetor[i]);
        }
    }
    return 0;
}
