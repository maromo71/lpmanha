#include <stdio.h>

int main(void) {
    double salario;
    printf("Digite o valor do salario: \n");
    scanf("%lf", &salario);

    salario *= salario<=1700.0 ? 1.15 : 1.10;

    printf("Valor do salario: %.2lf \n",salario);

    return 0;
}
