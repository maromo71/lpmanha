#include <stdio.h>
#include <stdlib.h>
/***********************************************************
* Nome: aula0803_12
* Objetivo: Uso de atribuição composta
* Nome do programador: Maromo
* Data de criação: 08 mar 2021
* obs: Exercicio feito pelo professor em aula para
    demonstracao do uso de operadores de atribuicao
    composta.
*************************************************************/
int main()
{
    int n, soma = 0;
    do {
        printf("Digite um numero: \n");
        scanf("%d", &n);
        soma += n;
    }while(n != 0);
    printf("O valor da soma :  %d \n", soma);
    return 0;
}
