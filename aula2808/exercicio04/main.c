#include <stdio.h>
/*
*Determinando o período do dia
Enunciado: Escreva um programa que leia a hora
atual (um número de 0 a 23) e  determine se é manhã
(5 a 11), tarde (12 a 17), noite (18 a 22)
ou madrugada (23 a 4). Use o operador ternário ? :.
*/
int main(void) {
    int hora;
    printf("Digite a hora [0..23] cheia: \n");
    scanf("%d", &hora);
    hora <= 4
        ? printf("madrugada\n")
        : hora <= 11
              ? printf("manha\n")
              : hora <= 17
                    ? printf("tarde\n")
                    : hora < 23
                          ? printf("noite\n")
                          : printf("madrugada\n");
    return 0;
}
