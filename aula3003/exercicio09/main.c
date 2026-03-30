#include <stdio.h>
#include <string.h>

void calcularMedias(float notas[5][3], float medias[5]);
void verificarSituacao(float medias[5], char situacao[5][21]);


int main() {
    float notas[5][3], medias[5];
    char situacao[5][21];
    //Cinco alunos com tres entradas de notas
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Aluno %d, Nota %d: ", i+1, j+1);
            scanf("%f", &notas[i][j]);
        }
    }

    calcularMedias(notas, medias);
    verificarSituacao(medias, situacao);

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d - Media: %.1f - %s\n", i+1, medias[i], situacao[i]);
    }
    return 0;
}

void calcularMedias(float notas[5][3], float medias[5]) {
    for (int i = 0; i < 5; i++) {
        float soma = 0;
        for (int j = 0; j < 3; j++) soma += notas[i][j];
        medias[i] = soma / 3;
    }
}

void verificarSituacao(float medias[5], char situacao[5][21]) {
    for (int i = 0; i < 5; i++) {
        if (medias[i] >= 7.0) strcpy(situacao[i], "Aprovado");
        else strcpy(situacao[i], "Reprovado");
    }
}
