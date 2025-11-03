//
// Created by memar on 03/11/2025.
//

#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
//funcoes que quero criar
/**
 * @brief Funcao inicializa - inicializar o vetor v
 * com 100 posicoes nulas. ou seja, nao alocadas, trata-se
 * de ponteiros.
 */
void inicializa() {
    for (int i = 0; i < MAX; i++) {
        v[i] = NULL; //posicoes ficarao nulas
    }
}

void ler_dados(int i) {
    if (v[i] != NULL) {
        printf("Posicao ja preenchida. Escolha outra\n");
        return;
    }
    v[i] = (p_aluno) malloc(sizeof(struct Aluno));
    fflush(stdin);
    printf("Digite seu nome: \n");
    gets(v[i]->nome);
    fflush(stdin);
    printf("Digite sua matricula (inteiro): \n");
    scanf("%d", &v[i]->matricula);
    fflush(stdin);
    printf("Digite sua endereco: \n");
    gets(v[i]->endereco);
    fflush(stdin);
    printf("Digite sua telefone: \n");
    gets(v[i]->telefone);
    fflush(stdin);
    printf("Digite sua nota: \n");
    scanf("%lf", &v[i]->nota);
    printf("Cadastrado da matricula %d efetuada com sucesso",
        v[i]->matricula);
}

void imprimir_dados(int i) {
    if (v[i] == NULL) {
        printf("Nao ha registros nesta posicao \n");
        return;
    }
    printf("Dados do Aluno\n");
    printf("Nome: %s\n", v[i]->nome);
    printf("Matricula: %d\n", v[i]->matricula);
    printf("Endereco: %s\n", v[i]->endereco);
    printf("Telefone: %s\n", v[i]->telefone);
    printf("Nota: %lf\n", v[i]->nota);
    printf("\n\n");
}

void imprimir_tudo() {
    for (int i = 0; i < MAX; i++) {
        if (v[i] != NULL) {
            imprimir_dados(i);
        }else {
            printf("Fim dos registros \n");
            return;
        }
    }
}

void procurar_aluno(int codigo) {
    for (int i = 0; i < MAX; i++) {
        if (v[i] != NULL) {
            if (codigo == v[i]->matricula) {
                imprimir_dados(i);
                return;
            }
        }
    }
    printf("Nao existe aluno com essa matricula\n");
}