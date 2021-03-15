#include <stdio.h>
#include <stdlib.h>

int main()
{
    //macete para colocar Zero em todo o vetor
    int vetor[100] = {0};
     //listar todos os dados
    for(int i=0; i<100; i++){
        printf("Posicao [%d] ==> Valor: %d \n", i, vetor[i]);
    }

    return 0;
}
