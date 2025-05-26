#ifndef ALUNO_H
#define ALUNO_H

#define MAX_ALUNOS 10000
#define MAX_NOME 61
#define MAX_CURSO 41

typedef struct Aluno {
    int matricula;
    char nome[MAX_NOME];
    char curso[MAX_CURSO];
    int periodo;
}aluno;

//Define um tipo 'p_aluno' como um ponteiro para a struct Aluno
typedef aluno *p_aluno;

//Declarar estrutura do vetor como global (vetor de ponteiros)
extern p_aluno alunos[MAX_ALUNOS];

//prototipar as funcoes basicas do sistema de alunos

//inicializar o vetor com todas as posicoes nulas, para nao ocupar mem
void inicializaAlunos();

//cadastrar um novo alunos
void cadastrarAluno();

//consultar um aluno ja cadastrado por matricular
void consultarAlunoMatricula();

//consultar um aluno por parte do nome
void consultarAlunoNome();

//rotina para alterar os dados de um aluno
void alterarDadosAlunos();

//imprimir na tela os dados de todos os alunos
void imprimirTodosAlunos();

//imprimir dados de apenas um aluno
void imprimirUmAluno();

#endif //ALUNO_H
