#include <stdio.h>

int main(void) {
    int n, soma = 0;
    do {
        do {
            printf("Digite um valor [1..10]: ");
            scanf("%d", &n);
            if (n < 1 || n > 10) printf("Entrada invalida\n");
        }while (n<1 || n>10);
        soma+= n;
    }while (soma < 100);
    printf("Somatoria: %d \n", soma);
    return 0;
}