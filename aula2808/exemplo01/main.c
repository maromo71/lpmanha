#include <stdio.h>

int main(void) {
    int opcao;
    printf("Menu de opcoes\n");
    printf("1. Cadastrar\n");
    printf("2. Consultar\n");
    printf("3. Localizar\n");
    printf("4. Atualizar\n");
    printf("5. Excluir\n");
    printf("9. Sair\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    if (opcao == 1) {
        printf("Executar cadastro...\n");
    }else {
        if (opcao == 2) {
            printf("Executar consulta...\n");
        }else {
            if (opcao == 3) {
                printf("Executar localizar...\n");
            }else {
                if (opcao == 4) {
                    printf("Executar atualizar...\n");
                }else {
                    if (opcao == 5) {
                        printf("Executar excluir...\n");
                    }else {
                        if (opcao == 9) {
                            printf("Fim do programa\n");
                        }else {
                            printf("Opcao invalida\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
