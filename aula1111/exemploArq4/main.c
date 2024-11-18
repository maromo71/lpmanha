#include <stdio.h>
struct Aluno {
    char nome[51];
    char curso[51];
    int score;
    double media;
}alunos[2];
//media de todos os alunos (nosso problema)
int main(void) {
    FILE *p_arq = NULL;
    p_arq = fopen("c:\\arquivo\\alunos.txt", "r");

    for (int i = 0; i < 2; i++) {
        fscanf(p_arq, "%50[^;];%50[^;];%d;%lf;\n",
                   alunos[i].nome,
                   alunos[i].curso,
                   &alunos[i].score,
                   &alunos[i].media);
    }

    //imprimir os dados de todos alunos
    for(int i = 0; i < 2; i++) {
        printf("Nome do aluno: %s\n", alunos[i].nome);
        printf("Curso do aluno: %s\n", alunos[i].curso);
        printf("Score do aluno: %d\n", alunos[i].score);
        printf("Media do aluno: %.2lf\n", alunos[i].media);
        printf("\n");
    }
    fclose(p_arq);
    return 0;
}
