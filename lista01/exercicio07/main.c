/*
 * Faça um programa que com uso da estrutura for.
 * Determine se um número dado pelo usuário é primo, ou não.
*/
#include <stdio.h>

int main(void) {
    int n;
    int primo = 1;
    do {
        printf("Digite um numero maior ou igual a dois: ");
        scanf("%d", &n);
    }while (!n>=2);

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }
    if (primo) {
        printf("Numero primo\n");
    }else {
        printf("Numero nao primo\n");
    }
    return 0;
}