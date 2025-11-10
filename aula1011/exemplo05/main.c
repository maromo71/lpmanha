#include <stdio.h>
typedef struct {
    char nome[50];
    float nota1;
    float nota2;
    float media;
} Aluno;
int main(void) {
    //Lendo um arquivo com notas de alunos
    FILE *p_arq = NULL;
    p_arq = fopen("C:\\dados\\notas.txt", "r");
    if (p_arq==NULL) {
        printf("Erro ao abrir o arquivo\n");
        return -1;
    }
    Aluno aluno;
    char linha[256];
    while (fgets(linha, sizeof(linha), p_arq)!=NULL) {
        if (sscanf(linha, "%49[^;];%f;%f", aluno.nome, &aluno.nota1, &aluno.nota2)==3) {
            aluno.media = (aluno.nota1 + aluno.nota2)/2;
            printf("==========================================================================================\n");
            if (aluno.media>=6) {
                printf("[Nome: %-16s | Nota 1: %.2f | Nota 2: %.2f | Media: %.2f | Situacao: APROVADO\n",
                    aluno.nome, aluno.nota1, aluno.nota2, aluno.media);
            }else {
                printf("[Nome: %-16s | Nota 1: %.2f | Nota 2: %.2f | Media: %.2f | Situacao: REPROVADO\n",
                    aluno.nome, aluno.nota1, aluno.nota2, aluno.media);
            }
        }
    }
    printf("==========================================================================================\n");
    fclose(p_arq);
    return 0;
}