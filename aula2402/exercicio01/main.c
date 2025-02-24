#include <stdio.h>

int main(void) {
    int idade;
    printf("Digite sua idade\n");
    scanf("%d", &idade);

    double valorCompra;
    printf("Digite valor da compra \n");
    scanf("%lf", &valorCompra);

    double desconto;

    if (idade < 18) {
        desconto = valorCompra * 0.05;
    }else {
        if (idade <= 60) {
            desconto = valorCompra * 0.10;
        }else {
            desconto = valorCompra * 0.15;
        }
    }
    printf("Desconto de R$ %.2lf \n", desconto);
    return 0;
}