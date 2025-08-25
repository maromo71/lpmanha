#include <stdio.h>

int main(void)
{
    int soma = 0;
    do {
        int n;
        do {
            printf("Digite um valor par entre 1..20\n");
            scanf("%d", &n);
        }while (n<1 || n>20);
        soma += n;
    }while (soma<=100);
    printf("Soma = %d\n", soma);
    return 0;
}