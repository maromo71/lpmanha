#include <stdio.h>
struct Aluno {
    char nome[51];
    char curso[51];
    int score;
    double media;
};
//media de todos os alunos (nosso problema)
int main(void) {
    //preciso saber quantos alunos tenho
    int total = 0;
    double media = 0.0;
    FILE *p_arq = NULL;
    p_arq = fopen("c:\\arquivo\\alunos.txt", "r");
    //Tratar para ver se abriu
    if (p_arq == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(p_arq)) != EOF) {
        if (ch == '\n') {
            total++;
        }
    }
    //voltar para o inicio do arquivo
    fseek(p_arq, 0, SEEK_SET);

    struct Aluno alunos[total];
    for (int i = 0; i < total; i++) {
        fscanf(p_arq, "%50[^;];%50[^;];%d;%lf;\n",
                   alunos[i].nome,
                   alunos[i].curso,
                   &alunos[i].score,
                   &alunos[i].media);
        media += alunos[i].media;
    }

    //imprimir os dados de todos alunos
    for(int i = 0; i < total; i++) {
        printf("Nome do aluno: %s\n", alunos[i].nome);
        printf("Curso do aluno: %s\n", alunos[i].curso);
        printf("Score do aluno: %d\n", alunos[i].score);
        printf("Media do aluno: %.2lf\n", alunos[i].media);
        printf("\n");
    }
    media /= total;
    printf("Media da sala: %.2lf\n", media);
    fclose(p_arq);
    return 0;
}