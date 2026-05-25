#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void iniciar_vetor() {
    //Passo unico - anular todas as posicoes do vetor de ponteiros para aluno
    for (int i=0; i<MAX; i++) {
        vetor[i] = NULL;
    }
}

void inserir_aluno() {
    //Passo 1 - procurar a primeira posicao vazia (NULL) do vetor
    int pos = -1;
    for (int i=0; i<MAX; i++) {
        if (vetor[i]==NULL) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        printf("Vetor completo. Nao pode mais cadastrar alunos");
        exit(1);
    }
    //Passo 2 - alocar memoria para um novo aluno no vetor
    vetor[pos] = (p_aluno) malloc(sizeof(aluno));
    //Passo 3 - Preencher com os dados vindos do usuario
    fflush(stdin);
    printf("Digite o nome do aluno: \n");
    // gets(vetor[pos]->nome); um exemplo usando o fget
    fgets(vetor[pos]->nome, 81, stdin);
    vetor[pos]->nome[strlen(vetor[pos]->nome)-1]='\0';
    fflush(stdin);
    printf("Digite o numero de matricula: \n");
    scanf("%d", &vetor[pos]->matricula);
    fflush(stdin);
    printf("Digite o endereco do aluno: \n");
    gets(vetor[pos]->endereco);
    fflush(stdin);
    printf("Digite o telefone do aluno: \n");
    gets(vetor[pos]->telefone);
    fflush(stdin);
    printf("Digite a nota da prova: \n");
    scanf("%lf", &vetor[pos]->nota);
    printf("Dados Cadastrados com sucesso\n");
    printf("-----------------------------\n");
}

void imprimir_aluno(int pos) {
    if (vetor[pos]!=NULL) {
        printf("Matricula: %d\n",vetor[pos]->matricula);
        printf("Nome do Aluno: %s\n",vetor[pos]->nome);
        printf("Endereco do Aluno: %s\n",vetor[pos]->endereco);
        printf("Telefone do Aluno: %s\n",vetor[pos]->telefone);
        printf("Nota do Aluno: %.2lf\n",vetor[pos]->nota);
        printf("---------------------------------------\n");
    }
}
void imprimir_todos() {
    for (int i=0; i<MAX; i++) {
        if (vetor[i]!=NULL) {
            imprimir_aluno(i);
        }
    }
}
void alterar_aluno() {
    //Passo 1 - Solicitar a matricula a ser procurada
    int matricula;
    fflush(stdin);
    printf("Digite o codigo da matricula a alterar: \n");
    scanf("%d", &matricula);
    //Passo 2 - Procurar no vetor por essa matricula
    int pos = -1;
    for (int i=0; i<MAX; i++) {
        if (vetor[i]!=NULL) {
            if (vetor[i]->matricula==matricula) {
                ler_dados(i);
                printf("Aluno alterado com sucesso \n");
                return;
            }
        }
    }
    if (pos == -1) {
        printf("Aluno com essa matricula nao encontrado\n");
    }
}

void procurar_aluno() {
    //Passo 1 - Solicitar a matricula a ser procurada
    int matricula;
    fflush(stdin);
    printf("Digite o codigo da matricula: \n");
    scanf("%d", &matricula);
    //Passo 2 - Procurar no vetor por essa matricula
    int pos = -1;
    for (int i=0; i<MAX; i++) {
        if (vetor[i]!=NULL) {
            if (vetor[i]->matricula==matricula) {
                imprimir_aluno(i);
                return;
            }
        }
    }
    if (pos == -1) {
        printf("Aluno com essa matricula nao encontrado\n");
    }
}

void ler_dados(int pos) {
    aluno novo_dado_aluno;
    imprimir_aluno(pos);

    fflush(stdin);
    printf("Digite o novo nome ou  ENTER para manter: \n");
    gets(novo_dado_aluno.nome);
    if (strlen(novo_dado_aluno.nome)>=2) {
        strcpy(vetor[pos]->nome, novo_dado_aluno.nome);
    }
    fflush(stdin);
    printf("Digite o nome telefone ou ENTER para manter: \n");
    gets(novo_dado_aluno.telefone);
    if (strlen(novo_dado_aluno.telefone)>=2) {
        strcpy(vetor[pos]->telefone, novo_dado_aluno.telefone);
    }

    fflush(stdin);
    printf("Digite o novo endereco ou ENTER para manter: \n");
    gets(novo_dado_aluno.endereco);
    if (strlen(novo_dado_aluno.endereco)>=2) {
        strcpy(vetor[pos]->endereco, novo_dado_aluno.endereco);
    }

    fflush(stdin);
    printf("Digite a nova nota do aluno ou -1 para manter: \n");
    scanf("%lf", &novo_dado_aluno.nota);
    if (novo_dado_aluno.nota!=-1) {
        vetor[pos]->nota = novo_dado_aluno.nota;
    }

}