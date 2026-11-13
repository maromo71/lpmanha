#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define T_LINHA 256
int main(void) {
    char nome[21];
    setlocale(LC_ALL, "pt_br.UTF-8");
    double nota1, nota2, media;
    FILE * p_alunos;
    //Abrir o arquivo notas.txt
    p_alunos = fopen("C:\\arquivos\\notas.txt", "r");
    if (p_alunos == NULL) {
        printf("Erro ao abrir arquivo!.\n");
        exit(1);
    }
    char linha[T_LINHA];
    //usando o fscanf (para ler e atribuir a variaveis do programa)
    while (fgets(linha, sizeof(linha), p_alunos) != NULL) {
        if (fscanf(p_alunos, "%20[^;];%lf;%lf", nome, &nota1, &nota2) == 3) {
            float media = (nota1 + nota2) / 2.0;
            char situacao[21];
            media >= 6 ? strcpy(situacao, "APROVADO") : strcpy(situacao, "REPROVADO");
            printf("Aluno: %-16s | "
                   "N1: %5.2lf  | N2: %5.2lf  | "
                   "Média: %5.2f  | Situação: %-10s \n",
                   nome, nota1, nota2, media, situacao);
        }
    }
    fclose(p_alunos);
    return 0;
}
