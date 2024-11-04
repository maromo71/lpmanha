#include <stdio.h>
struct Aluno {
    int ra;
    char nome[51];
    double nota;
    char email[61];
}alunos[10];

void imprimir(int t); //total que sera impre
void ler(int t); //total de lidos
int main(void) {
    int total;
    printf("Digite a quantidade de alunos a cadastrar. Max. 10\n");
    scanf("%d", &total);
    ler(total);
    imprimir(total);
    return 0;
}

void imprimir(int t) {
    printf("Dados dos alunos: \n");
    for (int i = 0; i < t; i++) {
        printf("RA: %d \n", alunos[i].ra);
        printf("Nome: %s \n", alunos[i].nome);
        printf("Nota: %.2f \n", alunos[i].nota);
        printf("Email: %s \n", alunos[i].email);
        printf("-------------------------------\n");
    }
}
void ler(int t) {
    printf("Leitura dos dados de %d alunos\n", t);
    for (int i = 0; i < t; i++) {
        fflush(stdin);
        printf("Digite o ra do aluno: \n");
        scanf("%d", &alunos[i].ra);
        fflush(stdin);
        printf("Digite o nome do aluno: \n");
        scanf("%[^\n]", &alunos[i].nome);
        fflush(stdin);
        printf("Digite o nota do aluno: \n");
        scanf("%lf", &alunos[i].nota);
        fflush(stdin);
        printf("Digite o email do aluno: \n");
        scanf("%[^\n]", &alunos[i].email);
        printf("\n==========================\n\n");
    }
}

