#include <stdio.h>
#include "aluno.h"

p_aluno vetor[MAX];

int construir_menu();

int main(void) {
    iniciar_vetor();
    int opcao = 0;
    do {
        opcao = construir_menu();
        switch (opcao) {
            case 1:
                inserir_aluno();
                break;
            case 2:
                procurar_aluno();
                break;
            case 3:
                imprimir_todos();
                break;
            case 4:
                alterar_aluno();
                break;
            case 9:
                printf("Fim do programa \n");
                break;
            default:
                printf("Opcao Invalida. Escolha novamente\n");
        }
    }while (opcao!=9);

    return 0;
}

int construir_menu() {
    int opcao;
    printf("MENU PRINCIPAL - CADASTRO ALUNOS\n");
    printf("1. Cadastrar Aluno \n");
    printf("2. Consultar Aluno \n");
    printf("3. Listar Alunos \n");
    printf("4. Alterar dados do Aluno \n");
    printf("9. Sair \n");
    printf("Escolha sua opcao: \n");
    scanf("%d", &opcao);
    return opcao;
}
