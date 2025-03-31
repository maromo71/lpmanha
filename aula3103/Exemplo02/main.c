#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char resultado[100];
    double salario;
    char nome[51];
    fflush(stdin);
    printf("Digite o nome do funcionario: \n");
    gets(nome);
    fflush(stdin);
    printf("Digite o salario da pessoa: \n");
    scanf("%lf", &salario);
    sprintf(resultado, "O funcionario %s recebe %.2lf de salario", nome, salario);
    printf("%s\n", resultado);
    return 0;
}