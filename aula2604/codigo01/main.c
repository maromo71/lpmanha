#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade_pecas = 30;
    //Declarando um ponteiro
    int * ptr_qtd_pecas = &quantidade_pecas; //Contém o endereço de memória de quantidade_pecas
    printf("Quantidade de peças em estoque: %d  \n", quantidade_pecas);
    printf("Quantidade de peças em estoque: %d  \n", *ptr_qtd_pecas);
    return 0;
}
