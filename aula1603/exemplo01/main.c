#include <stdio.h>

int main(void) {
    double =0.0; //obrigatorio
    double valor;
    printf("Somatoria de valores enq menor que 1000\n");


    while (soma < 1000) {
        printf("Digite um valor: ");
        scanf("%lf", &valor);
        soma += valor;
    }
    printf("Valor final de soma: %.2lf\n", soma);
    return 0;
}