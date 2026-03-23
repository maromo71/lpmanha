/*********************************************************
*Fazer um programa em C para calcular a somatória dos N *
 * primeiros divisores de um  inteiro X, onde N e X são  *
 * lidos e são números inteiros e positivos.             *
 * [Validar entradas].                                   *
 *********************************************************/
#include <stdio.h>

int main(void) {
    int n, x, soma = 0;
    do {
        printf("Digite um valor para n: ");
        scanf("%d", &n);
        printf("Digite um valor para x: ");
        scanf("%d", &x);
    }while (!(n > 0 && x > 0));
    printf("Somatoria dos divisores ate n..\n");
    int cont = 0;
    for (int i=1; i <=x; i++) {
        if (x % i == 0) {
            soma+= i;
            cont++;
            printf("%d \n", i); //so para mostrar os divisores
        }

        if (cont == n) break;
    }
    printf("Soma = %d\n", soma);
    return 0;
}