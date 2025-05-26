#include <stdio.h>
#include "aluno.h"

void exibirMenu();

void pausarParaContinuar();

int main(void)
{
    int opcao = 0;
    do {
        exibirMenu();
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            cadastrarAluno();
            break;
        case 2:
            consultarAlunoMatricula();
            break;
        case 3:
            consultarAlunoNome();
            break;
        case 4:
            alterarDadosAlunos();
            break;
        case 5:
            imprimirUmAluno();
            break;
        case 6:
            imprimirTodosAlunos();
            break;
        case 9:
            printf("Encerrando o sistema\n");
            break;
        default:
            printf("Opcao invalida\n");
        }
        if (opcao == 9) {
            pausarParaContinuar();
        }

    }while (opcao!= 9);
    printf("Programa finalizado\n");
    return 0;
}

 void exibirMenu()
{
    printf("\nMenu Principal - SGA \n");
    printf("1. Cadastrar Novo Aluno \n");
    printf("2. Consultar Aluno por Matricula \n");
    printf("3. Consultar Aluno por Nome \n");
    printf("4. Alterar Dados de um Aluno \n");
    printf("5. Imprimir Dados de um Aluno \n");
    printf("6. Imprimir Dados de todos os Alunos \n");
    printf("9. SAIR do sistema \n");
    printf("Escolha sua opcao: \n");
}

void pausarParaContinuar()
{
    printf("\nPressione uma tecla para continuar..\n");
    getchar();
}