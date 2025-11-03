//
// Created by memar on 03/11/2025.
//

#ifndef ALUNO_H
#define ALUNO_H

#define MAX 100

/**
 * @brief Tipo definido pelo usuario chamado aluno.
 * corresponde a struct Aluno criada.
 */
typedef struct Aluno {
    char nome[81];
    int matricula;
    char endereco[121];
    char telefone[21];
    double nota;
}aluno;
typedef aluno * p_aluno;

extern p_aluno v[MAX];

//funcoes que quero criar
void inicializa();

void ler_dados(int i);

void imprimir_dados(int i);

void imprimir_tudo();

void procurar_aluno(int codigo);

#endif //ALUNO_H