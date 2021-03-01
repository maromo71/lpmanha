#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    printf("Menu Principal \n");
    printf("1.. Somar \n");
    printf("2.. Subtrair \n");
    printf("3.. Multiplicar \n");
    printf("4.. Dividir \n");
    printf("9.. Sair \n");
    printf("Digite sua opcao:  \n");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
        printf("Chamada da funcao somar \n");
        break;
    case 2:
        printf("Chamada da funcao subtrair \n");
        break;
    case 3:
        printf("Chamada da funcao multiplicacao \n");
        break;
    case 4:
        printf("Chamada da funcao divisao \n");
        break;
    case 9:
        printf("Fim do programa \n");
        break;
    default:
        printf("Opcao invalida \n");
    }
    printf("Tchau  .... \n");
    return 0;
}
