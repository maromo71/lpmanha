#include <stdio.h>
#include <stdlib.h>
int main() {
    int tot = 0;
    printf("Digite o numero de alunos da sala: ");
    scanf("%d", &tot);
    FILE * fout = NULL;
    fout = fopen("/Users/marcosmoraes/dados/resultado.txt", "a");
    char nome[51];
    double nota1, nota2;
    for (int i = 0; i < tot; ++i) {
        fflush(stdin);
        printf("Digite o nome do aluno, e suas duas notas \n");
        scanf("%s %lf %lf", nome, &nota1, &nota2);
        double media = (nota1 + nota2) / 2.0;
        if(media>=6){
            fprintf(fout, "%s sua média é %2.2lf - situação: aprovado\n", nome, media);
        }else{
            fprintf(fout, "%s sua média é %2.2lf - situação: reprovado\n",nome, media);
        }
    }
    fclose(fout);
    return 0;
}
