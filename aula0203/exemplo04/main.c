#include <stdio.h>

int main(void) {
    double salario;
    printf("Digite o salario da pessoa: \n");
    scanf("%lf", &salario);
    salario *= salario <= 1900.0 ? 1.12 : 1.10;
    printf("Salario reajustado: %.2lf \n", salario);
    return 0;
}