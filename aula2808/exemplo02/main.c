#include <stdio.h>

int main(void) {
    int opcao;
    printf("Menu de opcoes\n");
    printf("1. Cadastrar\n");
    printf("2. Localizar\n");
    printf("3. Consultar\n");
    printf("4. Alterar\n");
    printf("5. Excluir\n");
    printf("9. Sair\n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Cadastrar pessoa\n");
            break;
        case 2:
            printf("Localizar pessoa\n");
            break;
        case 3:
            printf("Consultar pessoa\n");
            break;
        case 4:
            printf("Alterar pessoa\n");
            break;
        case 5:
            printf("Excluir pessoa\n");
            break;
        case 9:
            printf("Fim do programa\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    return 0;
}
