#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#define TAM 15

/*
1. Dados 15 valores aleatórios pelo computador, dispostos em um vetor.
Utilizando funções, faça o ordenamento dos valores, exibindo os valores
gerados antes e depois da ordenação.
*/
int main()
{
    int vetor[TAM];
    gerar(vetor, TAM);
    mostrar(vetor, TAM);
    ordenar(vetor, TAM);
    mostrar(vetor, TAM);
    return 0;
}
