#include <stdio.h>

int main(void)
{
    double salario;
    printf("Informe o salario atual: \n");
    scanf("%lf", &salario);
    /*
    if (salario <= 2000) {
        novoSalario = salario * 1.11;
    }else {
        novoSalario = salario * 1.10;
    } */
    salario *= salario <= 2000 ?   1.11 :  1.10;
    printf("Novo Salario: %.2lf \n", salario);
    return 0;
}