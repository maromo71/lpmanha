#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

struct produto {
    int codigo;
    char descricao[61];
    int quantidade;
    double valor;
};

int main()
{
    Produto produtos[100];
    int posicao = 0;
    int codigo_procurado = 0;
    int opc;
    do {
        system("clear");
        printf("Menu Principal \n");
        printf("1..Cadastrar \n");
        printf("2..Localizar \n");
        printf("3..Alterar \n");
        printf("4..Listar Dados \n");
        printf("5..Quantidade \n");
        printf("9..Sair \n");
        printf("Digite sua opção: ");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                cadastrar(produtos, posicao);
                posicao++;
                getchar();getchar();
                break;
            case 2:
                printf("Digite o código do produto que quer encontrar \n");
                scanf("%d", &codigo_procurado);
                localizar(produtos, codigo_procurado, posicao);
                getchar();getchar();
                break;
            case 3:
                printf("Digite o código do produto que quer alterar \n");
                scanf("%d", &codigo_procurado);
                alterar(produtos, codigo_procurado, posicao);
                getchar();getchar();
                break;
            case 4:
                listar(produtos, posicao);
                getchar();getchar();
                break;
            case 5:
                printf("Digite o código do produto que quer saber a qtd \n");
                scanf("%d", &codigo_procurado);
                imprimirQuantidade(produtos, codigo_procurado, posicao);
                getchar();getchar();
                break;
            case 9:
                printf("Fim do programa \n");
                break;
            default:
                printf("Opção inválida \n");

        }
    }while(opc != 9);
}
