#include <stdio.h>
/*
*Sequência de Fibonacci Escreva um programa que leia um
*número inteiro positivo N e imprima os N primeiros termos
* da sequência de Fibonacci. Exemplo para N=5: 0 1 1 2 3
*/
int main(void) {
    int n;
    do {
        printf("Digite um valor inteiro maior que dois: ");
        scanf("%d", &n);
    }while (!n>2);
    int pri = 0, seg = 1, seq=0;
    for (int i=3; i<=n; i++) {
        seq = pri + seg;
        pri = seg;
        seg = seq;
    }
    printf("O Termo eh: %d \n", seq);
    return 0;
}