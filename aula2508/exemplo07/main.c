#include <stdio.h>

int main(void)
{
    int soma = 0;
    int n;
    while (soma < 500) {
        printf("Digite um numero: \n");
        scanf("%d", &n);
        soma += n;
    }
    printf("Soma dos valores: %d \n", soma);
    return 0;
}