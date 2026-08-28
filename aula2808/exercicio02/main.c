#include <stdio.h>
/*
* Crie um programa que solicite ao usuário que insira
* um número de 1 a 7 e exiba o dia da semana
* correspondente (1 para Domingo, 2 para Segunda-feira, etc.)
* Se o usuário inserir um número fora desse intervalo,
* exiba uma mensagem de erro. Use a estrutura switch.
 */
int main(void) {
    int dia;
    printf("Digite um numero entre 1 e 7: \n");
    scanf("%d", &dia);
    switch (dia) {
        case 1:
            printf("Domingo \n");
            break;
        case 2:
            printf("Segunda \n");
            break;
        case 3:
            printf("Terca \n");
            break;
        case 4:
            printf("Quarta \n");
            break;
        case 5:
            printf("Quinta \n");
            break;
        case 6:
            printf("Sexta \n");
            break;
        case 7:
            printf("Sabado \n");
            break;
        default:
            printf("Erro \n");
    }
    return 0;
}
