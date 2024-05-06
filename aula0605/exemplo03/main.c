#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE * fin = NULL;
    FILE * fout = NULL;
    fin = fopen("/Users/marcosmoraes/dados/notas.txt", "r");
    fout = fopen("/Users/marcosmoraes/dados/resultado.txt", "w");
    if(fin==NULL || fout==NULL){
        printf("Erro ao abrir um dos arquivos\n");
        exit(1);
    }
    char nome[51];
    double nota1, nota2;
    while(fscanf(fin, "%s %lf %lf", nome, &nota1, &nota2)!=EOF){
        double media = (nota1 + nota2) / 2.0;

        if(media>=6){
            fprintf(fout, "%s sua média é %2.2lf - situação: aprovado\n", nome, media);
        }else{
            fprintf(fout, "%s sua média é %2.2lf - situação: reprovado\n",nome, media);
        }
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
