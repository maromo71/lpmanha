#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

/* Montar menu com as opcoes .... */
void menu();

int main()
{
    int opc, num1, num2;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &num1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &num2);

    do {
        menu();
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("Soma é: %d \n", somar(num1, num2));
                break;
            case 2:
                printf("Subtração é: %d \n", subtrair(num1, num2));
                break;
            case 3:
                printf("Multiplicar é: %d \n", multiplicar(num1, num2));
                break;
            case 4:
                printf("Divisão inteira é: %d \n", dividir(num1, num2));
                break;
            case 5:
                printf("Area da circunferencia: %f \n", calcularArea(10.0));
            case 9:
                printf("Fim do programa \n");
                break;
            default:
                printf("Opção inválida \n");
        }
    }while(opc!=9);
    return 0;
}

void menu{
        printf("Menu Principal \n");
        printf("1.. Somar \n");
        printf("2.. Subtrair \n");
        printf("3.. Multiplicar \n");
        printf("4.. Dividir \n");
        printf("5.. Area da circunferência \n");
        printf("9.. Sair do Programa \n");
        printf("Digite sua escolha: ");
}
