#include <stdio.h>

int main() {
    char produtividade;
    double salarioAtual, salarioReajustado;
    //Programa:
    //se o usuário cumpriu a produtividade
    //aumenta-se 10% senão 5% no seu salário.
    fflush(stdin);
    printf("Digite 's' ou 'S' para produtividade, se atingiu.\n");
    produtividade = getchar();
    fflush(stdin);
    printf("Digite o salario atual: \n");
    scanf("%lf", &salarioAtual);
    salarioReajustado = produtividade == 's' || produtividade == 'S' ?
            salarioAtual * 1.1 : salarioAtual * 1.05;
    printf("Novo salario: %.2lf \n", salarioReajustado);
    return 0;
}
