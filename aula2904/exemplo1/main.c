#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Aluno{
    int ra;
    char nome[51];
    double nota;
};
void ler(struct Aluno *p_aluno);
void imprimir(struct Aluno aluno);
int main() {
    struct Aluno aluno1, aluno2;
    //dados do aluno
    ler(&aluno1);
    ler(&aluno2);
    imprimir(aluno1);
    imprimir(aluno2);


    return 0;
}
void imprimir(struct Aluno aluno){
    printf("Dados completo do aluno\n");
    printf("RA do aluno: %d \n", aluno.ra);
    printf("Nome do Aluno: %s \n", aluno.nome);
    printf("Nota do Aluno: %.2lf \n", aluno.nota);
}
void ler(struct Aluno *p_aluno){
    printf("Digite o ra do aluno: \n");
    scanf("%d", &p_aluno->ra);
    fflush(stdin);
    printf("Digite o nome do aluno: \n");
    fgets(p_aluno->nome, 51, stdin);
    p_aluno->nome[strlen(p_aluno->nome)-1] = '\0';
    fflush(stdin);
    printf("Digite a nota do aluno: \n");
    scanf("%lf", &p_aluno->nota);
}
