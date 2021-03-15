#include <stdio.h>
#include <stdlib.h>
#define TAM 10
int main()
{
    int va[TAM], vb[TAM];
    printf("Soma dos valores por posicao: \n");
    printf("Posicao PAR -> valor entrado multiplica por 5 \n");
    printf("Posicao ÍMPAR -> valor entra acresce 5 \n");
    for(int i=0; i<TAM; i++){
        printf("Digite um numero: \n");
        scanf("%d", &va[i]);
        vb[i] = i % 2 == 0 ? va[i]*5 : va[i]+5;
    }
    //um primeiro for para listar o va lado a lado
    for(int i=0; i<TAM; i++){
        printf("[%4d] ", va[i]);
    }
    printf("\n");
    //um segundo for para listar o vb lado a lado
    for(int i=0; i<TAM; i++){
        printf("[%4d] ", vb[i]);
    }
    printf("\n");

    return 0;
}
