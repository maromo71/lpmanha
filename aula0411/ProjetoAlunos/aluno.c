#include "aluno.h"

#include <stdio.h>
#include <stdlib.h>

void inicializa() {
    printf("Estrutura inicialiada\n");
    for(int i=0; i<MAX; i++) {
        v[i] = NULL;
    }
}

void ler_dados(int pos) {
    if(pos <0 || pos >= 100) {
        printf("Erro: posicao invalida\n");
        return;
    }
    v[pos] = (p_aluno) malloc(sizeof(struct Aluno));
    printf("Digite os dados do aluno: \n");
    fflush(stdin);
    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]s", v[pos]->nome);
    fflush(stdin);
    printf("Digite o codigo de matricula:\n");
    scanf("%d", &v[pos]->matricula);
    fflush(stdin);
    printf("Digite o endereco do aluno:\n");
    scanf(" %[^\n]s", v[pos]->endereco);
    fflush(stdin);
    printf("Digite o telefone do aluno:\n");
    scanf(" %[^\n]s", v[pos]->telefone);
    fflush(stdin);
    printf("Digite a nota do aluno:\n");
    scanf("%lf", &v[pos]->nota);
    printf("DADOS CADASTRADOS COM SUCESSO\n\n");
}

void imprimir_unico(int pos) {
    printf("Dados do Aluno Solicitado: \n");
    printf("Nome: %s\n", v[pos]->nome);
    printf("Maticula: %d\n", v[pos]->matricula);
    printf("Endereco: %s\n", v[pos]->endereco);
    printf("Telefone: %s\n", v[pos]->telefone);
    printf("Nota: %lf\n", v[pos]->nota);
    printf("-----------------------------------\n\n");
}

void imprimir() {
    for (int i=0; i<MAX; i++) {
        if (v[i] == NULL) return; //força a saída
        imprimir_unico(i);
    }
}
