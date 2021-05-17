#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"
#define T 3
struct computador {
    char nome[51];
    float preco;
};
/*
computador: char nome[51], float preco;
Crie um vetor que armazene 5 computadores
entrados pelo usuário e apresente o computador com maior preço.
*/
int main()
{
    //solução ideal
    struct computador vetComp[T];
    entrar_dados(vetComp, T);
    char computador[51] = {'\0'};
    int indice = maior_preco(vetComp, T);
    printf("Computador de Maior Preco: \n");
    printf("Nome de computador: %s \n", vetComp[indice].nome);
    printf("Preço do computaodr: %.2f \n", vetComp[indice].preco);

    return 0;
}
