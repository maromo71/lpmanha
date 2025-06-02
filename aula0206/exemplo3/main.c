#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char nome[31];
    double nota1, nota2, media;
    int ch;
    FILE * p_arq = fopen("/Users/marcosmoraes/dados.txt", "r");
    if (p_arq == NULL) {
        printf("Arquivo nao pode ser aberto\n");
        exit(1);
    }
    //ler linha a linha usando o fscanf
    while (fscanf(p_arq, "%s %lf %lf", nome, &nota1, &nota2) != EOF) {
        media = (nota1 + nota2) / 2;
        if (media >= 7.0) {
            printf("Nome %s sua media eh %lf e foi aprovado \n", nome, media);
        }else {
            printf("Nome %s sua media eh %lf e foi reprovado \n", nome, media);
        }
    }
    fclose(p_arq);
    return 0;
}