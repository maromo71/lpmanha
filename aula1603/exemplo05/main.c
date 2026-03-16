#include <stdio.h>
//Controle do cofrinho
int main(void) {
    double saldo = 0.0;
    int opcao;
    do {
        printf(">>>>>> CONTROLE DE CAIXA <<<<<<\n");
        printf("1.. Depositar no caixa \n");
        printf("2.. Sacar do caixa \n");
        printf("3.. Exibir saldo atual \n");
        printf("9.. SAIR \n");
        printf("Escolha sua opcao: \n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                double deposito;
                printf("Digite o valor do deposito: ");
                scanf("%lf", &deposito);
                saldo += deposito;
                printf("Valor depositado com sucesso.\n");
                break;
            case 2:
                double retirada;
                printf("Digite o valor do saque: ");
                scanf("%lf", &retirada);
                saldo -= retirada;
                printf("Valor sacado com sucesso.\n");
                break;
            case 3:
                printf("Saldo atual R$ %.2lf \n", saldo);
                break;
            case 9:
                printf("Fim do Programa. Saldo final: R$ %.2lf\n", saldo);
                break;
            default:
                printf("Opcao invalida.\n");
        }
    }while (opcao!=9);
    return 0;
}