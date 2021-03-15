#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    int vetor[TAM]; //Limite máximo do vetor
    int i, num;
    for(i=0; i<TAM; i++){
        printf("Digite um valor, ou [-9] para encerrar: \n");
        scanf("%d", &num);
        if(num == -9) break;
        vetor[i] = num;
    }
    int total = i == TAM ? TAM : i;
    //exibir os dados entrados pelo usuario
    for(int i =0; i<total; i++){
        printf("Valor do vetor[%d] ===> %d \n", i, vetor[i]);
    }
    return 0;
}
