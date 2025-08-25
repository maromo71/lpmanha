#include <stdio.h>

int main(void)
{
    int opcao;
    printf("Cardapio \n");
    printf("1. Pizza Portuguesa \n");
    printf("2. Pizza Calabreza \n");
    printf("3. Pizza Carbonara \n");
    printf("4. Pizza de Abobrinha \n");
    printf("Escolha sua opcao: \n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Valor R$ 86,00 \n");
            break;
        case 2:
            printf("Valor R$ 89,00 \n");
            break;
        case 3:
            printf("Valor R$ 90,00 \n");
            break;
        case 4:
            printf("Valor R$ 95,00 \n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    return 0;
}