#include <stdio.h>

int main(void) {
    int opcao;
    printf("Faca sua escolha pelo numero: \n");
    printf("1. Pizza Calabreza\n");
    printf("2. Pizza Mussarela\n");
    printf("3. Pizza Frango Catupiry\n");
    printf("4. Pizza Quatro Queijos\n");
    printf("Digite sua opcao:  \n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Sua escolha foi Pizza Calabreza\n");
            break;
        case 2:
            printf("Sua escolha foi Pizza Mussarela\n");
            break;
        case 3:
            printf("Sua escolha foi Frango Catupiry\n");
            break;
        case 4:
            printf("Sua escolha foi Quatro Queijos\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    return 0;
}