#include <stdio.h>
#include "aluno.h"

p_aluno v[MAX];

int main(void) {
    int posicao = 0;
    inicializa();
    int pos_desejada = 0;
    int opcao = 0;
    do {
        printf("Menu principal \n");
        printf("1. Cadastrar novo aluno \n");
        printf("2. Mostrar do aluno \n");
        printf("3. Mostrar Todos alunos \n");
        printf("9. Sair \n");
        printf("Digite a opcao: \n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                ler_dados(posicao);
                posicao++;
                break;
            case 2:
                printf("Digite a posicao do vetor: \n");
                scanf("%d", &pos_desejada);
                imprimir_unico(pos_desejada);
                break;
            case 3:
                imprimir();
                break;
            case 9:
                printf("Fim\n");
                break;
            default:
                printf("Oposicao invalida\n");
        }
    }while(opcao != 9);
    return 0;
}
