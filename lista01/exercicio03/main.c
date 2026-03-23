/*************************************************************
*Faça o programa que apresenta a seguinte saída, perguntando
*ao usuário o número máximo (no exemplo, 9). Este número deve
* ser sempre ímpar.
* 1 2 3 4 5 6 7 8 9
* 2 3 4 5 6 7 8 9
* 3 4 5 6 7 8 9
* ....
*************************************************************/
#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Digite um numero inteiro e impar: \n");
        scanf("%d", &n);
    }while (n%2==0);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            printf("%2d ", j);
        }
        printf("\n");
    }
    return 0;
}