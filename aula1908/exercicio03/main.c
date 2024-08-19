/**
 * Faça o programa que apresenta a seguinte saída,
 * perguntando ao usuário o número máximo
 * (no exemplo, 9). Este número deve ser sempre ímpar.
 */
#include <stdio.h>

int main(void) {
    int n;
    do{
        printf("Digite um valor impar \n");
        scanf("%d", &n);
    }while(n%2==0); //enquanto for par, pede outro numero
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <=n; ++j) {
            printf("%d ", j);
        }
        printf("\n"); //pular a linha quando terminar as impressoes dela
    }
    return 0;
}
