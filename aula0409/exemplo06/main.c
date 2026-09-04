#include <stdio.h>

int main(void) {
    int base, potencia, resultado=1;
    printf("Digite o valor da base: \n");
    scanf("%d", &base);
    printf("Digite o valor da potencia: \n");
    scanf("%d", &potencia);
    for (int i=1; i<=potencia; i++) {
        resultado *= base;
    }
    printf("O resultado e: %d\n", resultado);
    return 0;
}
