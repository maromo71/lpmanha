#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Empregado {
    int matr;
    double salario;
    char nome[51];
};
void lerDados(struct Empregado * p_empregado)
{
    printf("Digite a matricula do empregado:\n");
    scanf("%d", &p_empregado->matr);
    getchar();


    printf("Digite o nome do empregado do empregado:\n");
    fgets(p_empregado->nome, sizeof(p_empregado->nome), stdin);
    p_empregado->nome[strlen(p_empregado->nome) - 1] = '\0';


    printf("Digite o salario do empregado:\n");
    scanf("%lf", &p_empregado->salario);

    printf("Pressione um tecla para continuar...\n");
    getchar();
    getchar();
}
void imprimir(struct Empregado empregado)
{
    printf("RELATORIO DE DADOS DO EMPREGADO \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
    printf("Codigo de Matricula: %d\n", empregado.matr);
    printf("Nome...............: %s\n", empregado.nome);
    printf("Salario............: %.2lf\n", empregado.salario);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
}
int main(void)
{
    struct Empregado empregado;
    lerDados(&empregado);
    imprimir(empregado);
    return 0;
}