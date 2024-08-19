#include <stdio.h>

int main(void) {
    double salario, desconto;
    printf("Digite o valor do salario: \n");
    scanf("%lf", &salario);
    desconto = salario <=1500.0 ? salario*0.10 : salario*0.11;
    printf("Valor do desconto R$ %.2lf\n", desconto);
    return 0;
}
