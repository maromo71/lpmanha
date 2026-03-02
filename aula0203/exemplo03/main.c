#include <stdio.h>

int main(void) {
    double salario;
    printf("Digite o salario da pessoa: \n");
    scanf("%lf", &salario);
    if (salario <= 1900.0) {
        salario *= 1.12; //mesmo: salario = salario * 1.12;
    }else {
        salario *= 1.10;
    }
    printf("Salario reajustado: %.2lf \n", salario);
    return 0;
}