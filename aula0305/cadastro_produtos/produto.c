#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

struct produto {
    int codigo;
    char descricao[61];
    int quantidade;
    double valor;
};

void cadastrar(Produto * prod, int posicao){
    printf("Digite o codigo do produto \n");
    scanf("%d", &prod[posicao].codigo);
    //fflush(stdin);
    while (getchar() != '\n');
    printf("Digite a descrição do produto \n");
    scanf("%[^\n]s", prod[posicao].descricao);
    while (getchar() != '\n');
    printf("Digite a quantidade em estoque \n");
    scanf("%d", &prod[posicao].quantidade);
    printf("Digite o valor do produto \n");
    scanf("%lf", &prod[posicao].valor);
    printf("Produto cadastrado com sucesso\n");
}

void listar(Produto * prod, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Código do Produto: %d \n", prod[i].codigo);
        printf("Descrição do Produto: %s \n", prod[i].descricao);
        printf("Quantidade do Produto: %d \n", prod[i].quantidade);
        printf("Valor do Produto: %.2f \n", prod[i].valor);
        printf("===============================================\n");
    }
}

void localizar(Produto * prod, int codigo_procurado, int tamanho){
    for(int i=0; i<tamanho; i++){

        if(codigo_procurado == prod[i].codigo) {
            printf("Código do Produto: %d \n", prod[i].codigo);
            printf("Descrição do Produto: %s \n", prod[i].descricao);
            printf("Quantidade do Produto: %d \n", prod[i].quantidade);
            printf("Valor do Produto: %.2f \n", prod[i].valor);
            printf("===============================================\n");
            return;
        }
    }
    printf("Código procurado não localizado \n");
}

void alterar(Produto * prod, int codigo_procurado, int tamanho){
    for(int i=0; i<tamanho; i++){

        if(codigo_procurado == prod[i].codigo) {
            printf("Código do Produto: %d \n", prod[i].codigo);
            printf("Digite o novo código: \n");
            scanf("%d", &prod[i].codigo);
            printf("Descrição do Produto: %s \n", prod[i].descricao);
            printf("Digite a nova descrição: \n");
            while (getchar() != '\n');
            scanf("%[^\n]s", prod[i].descricao);
            while (getchar() != '\n');
            printf("Quantidade do Produto: %d \n", prod[i].quantidade);
            printf("Digite a nova quantidade: \n");
            scanf("%d", &prod[i].quantidade);
            printf("Valor do Produto: %.2f \n", prod[i].valor);
            printf("Digite o novo valor: \n");
            scanf("%lf", &prod[i].valor);
            printf("===============================================\n");
            return;
        }
    }
    printf("Código procurado não localizado \n");
}

void imprimirQuantidade(Produto * prod, int codigo_procurado, int tamanho){
    for(int i=0; i<tamanho; i++){
        if(codigo_procurado == prod[i].codigo) {
            printf("Quantidade Atual do produto %s no estoque\n", prod[i].descricao);
            printf("Estoque Atual: %d \n", prod[i].quantidade);
            return;
        }
    }
    printf("Código procurado não localizado \n");
}

