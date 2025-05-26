#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//Definicao do array global para ponteiro de alunos
p_aluno alunos[MAX_ALUNOS];


//funcao para remover o buffer caracteres restantes da memoria do teclado
void limparBufferEntrada()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void removerNovaLinha(char * str)
{
    size_t len = strlen(str);
    if (len > 0 && str[len -1] == '\n') {
        str[len - 1] = '\0';
    }
}

//imprimir os dados de um aluno formatado
//tambem é uma funcao auxiliar
void _exibirDadosAlunos(aluno *p_a)
{
    if (p_a == NULL) {
        printf("Referencia de aluno nula... \n");
        return;
    }
    printf("\n-----------------------------\n");
    printf("Matricula: %d \n", p_a->matricula);
    printf("Nome: %s \n", p_a->nome);
    printf("Curso: %s \n", p_a->curso);
    printf("Periodo: %d \n", p_a->periodo);
    printf("-----------------------------\n");
}
//inicializar o vetor com todas as posicoes nulas, para nao ocupar mem
void inicializaAlunos()
{
    for (int i=0; i<MAX_ALUNOS; i++) {
        alunos[i] = NULL;
    }
}

//cadastrar um novo alunos
void cadastrarAluno()
{
    int i = 0;
    int posicao = -1;
    for (i=0; i<MAX_ALUNOS;i++) {
        if (alunos[i] == NULL) {
            posicao = i;
            break;
        }
    }
    if (posicao == -1) {
        printf("Nao ha espaco na memoria para mais alunos\n");
        return;
    }
    //alocar dinamicamente um espaco na memoria para um aluno
    alunos[posicao] =(aluno*) malloc(sizeof(aluno));
    if (alunos[posicao] == NULL) {
        printf("Alocacao invalida\n");
        return;
    }
    printf("Cadastrando novo na aluno na posicao %d do vetor: \n", posicao);
    //Leitura da matricula
    printf("Digite o numero da matricula do aluno: \n");
    scanf("%d", &alunos[posicao]->matricula);
    limparBufferEntrada();

    printf("Digite o nome do aluno: \n");
    fgets(alunos[posicao]->nome, sizeof(alunos[posicao]->nome), stdin);
    removerNovaLinha(alunos[posicao]->nome);

    printf("Digite o curso do aluno: \n");
    fgets(alunos[posicao]->curso, sizeof(alunos[posicao]->curso), stdin);
    removerNovaLinha(alunos[posicao]->curso);

    do {
        printf("Digite o perido: [1..6] \n");
        scanf("%d", &alunos[posicao]->periodo);
        limparBufferEntrada();
    }while (alunos[posicao]->periodo < 1 || alunos[posicao]->periodo > 6);

    printf("Aluno [%s] cadastrado com sucesso..\n", alunos[posicao]->nome);
}

//consultar um aluno ja cadastrado por matricular
void consultarAlunoMatricula()
{
    int encontrado = 0;
    int matriculaBusca;
    printf("Digite a matricula a ser encontrada: \n");
    scanf("%d", &matriculaBusca);
    limparBufferEntrada();

    for (int i=0; i<MAX_ALUNOS; i++) {
        if (alunos[i] != NULL) {
            if (alunos[i]->matricula == matriculaBusca) {
                printf("Aluno encontrado \n");
                _exibirDadosAlunos(alunos[i]);
                encontrado = 1;
                break;
            }
        }
    }
    if (!encontrado) {
        printf("Aluno nao encontrado ..\n");
    }
}

//consultar um aluno por parte do nome
void consultarAlunoNome()
{
    char nomeBusca[MAX_NOME];
    int encontrado = 0;
    limparBufferEntrada();
    printf("Digite o nome (ou parte do nome) a ser encontrado: \n");
    fgets(nomeBusca, sizeof(nomeBusca), stdin);
    removerNovaLinha(nomeBusca);
    if (strlen(nomeBusca)== 0) {
        printf("Digite o nome corretamente...\n");
        return;
    }
    for (int i=0; i<MAX_ALUNOS; i++) {
        if (alunos[i] != NULL) {
            if (strstr(alunos[i]->nome, nomeBusca) != NULL) {
                _exibirDadosAlunos(alunos[i]);
                encontrado++;
            }
        }
    }
    if (!encontrado) {
        printf("Aluno nao encontrado ..\n");
    }else {
        printf("Encontrado(s) %d aluno(s)", encontrado);
    }
}

//rotina para alterar os dados de um aluno
void alterarDadosAlunos()
{
    int matriculaBusca;
    int indiceAluno = -1;
    char bufferEntrada[MAX_NOME];
    int periodoNovo;
    printf("\n-->Alterar dados do aluno pela matricula encotrada <-\n");
    printf("Digite a matricula a ser encontrada: \n");
    scanf("%d", &matriculaBusca);
    limparBufferEntrada();

    //Encontrar aluno a ser alterado
    for (int i=0; i<MAX_ALUNOS; i++) {
        if (alunos[i] != NULL) {
            if (alunos[i]->matricula == matriculaBusca) {
                indiceAluno = i;
                break;
            }
        }
    }
    if (indiceAluno == -1) {
        printf("Aluno nao encontrado ..\n");
        return;
    }
    printf("Aluno encontrado na posicao: %d \n", indiceAluno);
    _exibirDadosAlunos(alunos[indiceAluno]);
    printf("-> Iniciando o processo de alteracao de dados <-\n");
    printf("Para cada campo abaixo, digite o NOVO VALOR ou pressione ENTER para manter\n");
    //Alterar o nome
    printf("Nome Atual: %s \n", alunos[indiceAluno]->nome);
    printf("Digite o novo nome: \n");
    fgets(bufferEntrada, sizeof(bufferEntrada), stdin);
    removerNovaLinha(bufferEntrada);
    if (strlen(bufferEntrada) > 0) {
        strcpy(alunos[indiceAluno]->nome, bufferEntrada);
        printf("Nome alterado para: %s \n", alunos[indiceAluno]->nome);
    }else {
        printf("Nome mantido: %s\n", alunos[indiceAluno]->nome);
    }
    //Alterar o curso
    printf("Curso Atual: %s \n", alunos[indiceAluno]->curso);
    printf("Digite o novo nome do curso: \n");
    fgets(bufferEntrada, sizeof(bufferEntrada), stdin);
    removerNovaLinha(bufferEntrada);
    if (strlen(bufferEntrada) > 0) {
        strcpy(alunos[indiceAluno]->curso, bufferEntrada);
        printf("Nome do curso alterado para: %s \n", alunos[indiceAluno]->curso);
    }else {
        printf("Nome do curso mantido: %s\n", alunos[indiceAluno]->curso);
    }
    //Alterar o periodo do curso
    printf("Periodo Atual: %d \n", alunos[indiceAluno]->periodo);
    printf("Digite o novo perido: \n");
    scanf("%d", &periodoNovo);
    limparBufferEntrada();
    if (periodoNovo < 1 || periodoNovo > 6) {
        printf("Periodo novo deve ser de 1 a 6. Favor repetir a operacao\n");
        return;
    }
    alunos[indiceAluno]->periodo = periodoNovo;
    printf("Periodo novo: %d \n", alunos[indiceAluno]->periodo);
    printf("Alteracao concluida com sucesso. Dados finais: \n");
    _exibirDadosAlunos(alunos[indiceAluno]);

}

//imprimir na tela os dados de todos os alunos
void imprimirTodosAlunos()
{
    int contador = 0;
    for (int i=0; i<MAX_ALUNOS; i++) {
        if (alunos[i] != NULL) {
            contador++;
            _exibirDadosAlunos(alunos[i]);
        }
    }
    if (contador == 0) {
        printf("Nenhum aluno cadastrado \n");
    }else {
        printf("Qtd de alunos atualmente cadastrados: %d \n", contador);
    }
}

//imprimir dados de apenas um aluno
void imprimirUmAluno()
{
    int matriculaBusca;
    int encontrado = 0;
    printf("-> Imprimindo dados de um aluno unico.. \n <-");
    printf("Digite a matricula a ser impressa: \n");
    scanf("%d", &matriculaBusca);
    limparBufferEntrada();

    for (int i=0; i<MAX_ALUNOS; i++) {
        if (alunos[i] != NULL) {
            if (alunos[i]->matricula == matriculaBusca) {
                encontrado++;
                _exibirDadosAlunos(alunos[i]);
                break;
            }
        }
    }
    if (!encontrado) {
        printf("Aluno nao encontrado ..\n");
    }else {
        printf("Dados do aluno encontrado, logo acima...\n");
    }
}