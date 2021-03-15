#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[100];
    //alimentando com zero todas as posicoes do vetor
    for(int i=0; i<100; i++){
        vetor[i] = 0;
    }
    //listar todos os dados
    for(int i=0; i<100; i++){
        printf("Posicao [%d] ==> Valor: %d \n", i, vetor[i]);
    }
    //exibe a mensagem
    printf("Fim!\n");
    return 0;
}
