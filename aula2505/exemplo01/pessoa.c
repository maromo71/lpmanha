#include "pessoa.h"
#include <stdio.h>

void imprimir(struct Produto produto) {
    //Apresentando os dados na tela
    printf("Dados dos produto cadastrado: \n");
    printf("Codigo: %d \n", produto.codigo);
    printf("Descricao: %s \n", produto.descricao);
    printf("Quantidade em Estoque: %d \n", produto.quantidade);
    printf("Valor em R$: %.2lf \n", produto.valor);
}
void ler(struct Produto * produto) {
    //pedir ao usuario os dados (leitura)
    printf("Cadastrando um Produto\n");
    fflush(stdin);
    printf("Digite o codigo do produto: \n");
    scanf("%d", &produto->codigo);

    fflush(stdin);
    printf("Digite a descricao do produto: \n");
    gets(produto->descricao);

    fflush(stdin);
    printf("Digite a quantidade em estoque do produto: \n");
    scanf("%d", &produto->quantidade);

    fflush(stdin);
    printf("Digite o preco ao consumidor: \n");
    scanf("%lf", &produto->valor);
}
