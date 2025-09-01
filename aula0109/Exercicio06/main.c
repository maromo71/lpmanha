#include <stdio.h>

int main(void) {
    printf("Piramide de numeros \n");
    int numero;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    if (numero < 1) {
        printf("Numero invalido\n");
        return 1;
    }
    for (int i=1; i<=numero; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}