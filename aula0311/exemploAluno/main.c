#include <stdio.h>
#include <stdlib.h>

#include "aluno.h"

p_aluno v[MAX];

int main(void) {
    int i = 0;
    int opcao;
    inicializa(); //iniciar o vetor de ponteiros desalocando
    do {
        printf("Menu Principal\n");
        printf("1. Cadastrar Aluno \n");
        printf("2. Imprimir dados de um aluno \n");
        printf("3. Imprimir dados de todos \n");
        printf("9. Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                ler_dados(i); //Chama ler dados passando a posicao inicial
                i++; //somar 1 na variavel para representar a prox posicao
                break;
            case 2:
                int matr_procurada;
                printf("Digite a matricula do aluno desejado: \n");
                scanf("%d", &matr_procurada);
                procurar_aluno(matr_procurada);
                break;
            case 3:
                imprimir_tudo();
                break;
            case 9:
                printf("Saindo ... \n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 9);
    return 0;
}
