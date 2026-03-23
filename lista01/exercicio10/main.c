/*
* Fatorial de um Número: Faça um programa que leia um número
* inteiro positivo e  calcule o seu fatorial N!.
* O programa deve validar se o número digitado é negativo e pedir
* uma nova entrada caso seja*/

#include <stdio.h>
int main(void) {
    int n;
    do {
        printf("Digite um valor positivo: ");
        scanf("%d", &n);
    }while (!n>0);
    int fat = 1;
    for (int i = 1; i<=n; i++) {
        fat *= i;
    }
    printf("%d!  ===> %d \n", n, fat);
    return 0;
}