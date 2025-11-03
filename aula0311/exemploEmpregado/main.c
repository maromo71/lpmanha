#include <stdio.h>
struct Empregado {
    int matr;
    char nome[51];
    double salario;
};
void imprimir(struct Empregado empregado);
void ler(struct Empregado * p_empregado);
int main(void) {
    struct Empregado emp_joao;
    ler(&emp_joao);
    imprimir(emp_joao);
    return 0;
}
void imprimir(struct Empregado empregado) {
    printf("Imprimindo dados do Empregado\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Matricula: %d\n", empregado.matr);
    printf("Nome: %s\n", empregado.nome);
    printf("Salario: %.2f\n", empregado.salario);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
void ler(struct Empregado *p_empregado) {
    printf("Digite a matricula do funcionario: ");
    scanf("%d",&p_empregado->matr );
    fflush(stdin);
    printf("Digite o nome do funcionario: ");
    gets(p_empregado->nome);
    fflush(stdin);
    printf("Digite o salario do funcionario: ");
    scanf("%lf", &p_empregado->salario);
}