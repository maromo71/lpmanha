#include <stdio.h>
#include "calculadora.h"

int main(void) {
    int opcao, a, b, r;
    do{
        printf("Digite o primeiro valor: \n");
        scanf("%d", &a);
        printf("Digite o segundo valor: \n");
        scanf("%d", &b);
        printf("Escolha a operação: \n");
        printf("1.. Somar \n");
        printf("2.. Subtrair \n");
        printf("3.. Multiplicar \n");
        printf("4.. Dividir \n");
        printf("5.. Encontrar Resto \n");
        printf("9.. FIM DO PROGRAMA \n");
        printf("Escolha sua opcao: \n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                r = somar(a, b);
                break;
            case 2:
                r = subtrair(a, b);
                break;
            case 3:
                r = multiplicar(a, b);
                break;
            case 4:
                r = dividir(a, b);
                break;
            case 5:
                r = encontrar_resto(a, b);
                break;
            case 9:
                printf("Fim do programa\n");
                return 0;
            default:
                printf("Opcao invalida\n");
        }
        printf("Resultado: %d \n", r);
        printf("Digite uma tecla para continuar\n");
        fflush(stdin);
        getchar();
    }while(opcao !=9);
    return 0;
}
