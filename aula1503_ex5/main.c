#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    int vetor[TAM]; //Limite máximo do vetor
    int i;
    for(i=0; i<TAM; i++){
        printf("Digite um valor, ou [-9] para encerrar: \n");
        scanf("%d", &vetor[i]);
        if(vetor[i]==-9) break;
    }
    int total = i == TAM ? TAM : i + 1;
    //exibir os dados entrados pelo usuario
    for(int i =0; i<total; i++){
        printf("Valor do vetor[%d] ===> %d \n", i, vetor[i]);
    }
    return 0;
}
