#include <stdio.h>
#include "calculadora.h"

int main() {
    printf("Calculadora Básica \n");
    printf("Escolha a opcão desejada: \n");
    printf("1.. Somar \n");
    printf("2.. Subtrair \n");
    printf("3.. Multiplicar \n");
    printf("4.. Dividir \n");
    printf("5.. Potencia de .. \n");
    int opcao, valor1, valor2, resultado=0;
    scanf("%d", &opcao);
    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);
    switch (opcao) {
        case 1:
            resultado = somar(valor1, valor2);
            break;
        case 2:
            resultado = subtrair(valor1, valor2);
            break;
        case 3:
            resultado = multiplicar(valor1, valor2);
            break;
        case 4:
            resultado = dividir(valor1, valor2);
            break;
        case 5:
            resultado = exponenciar(valor1, valor2);
            break;
        default:
            printf("Opção inválida\n");
    }
    printf("Resultado da operação: %d \n", resultado);
    return 0;
}
