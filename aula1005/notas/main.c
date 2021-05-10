#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char Nome[50];
    float nota1, nota2, media;
    if((fp = fopen("notas.txt", "r"))==NULL)
    {
        printf("Impossivel abrir arquivo \n");
        exit(2);
    }
    /* Teste da nota */
    while (fscanf(fp, "%s %f %f", Nome, &nota1, &nota2)!=EOF)
    {
        media= (nota1 + nota2)/2;
        if(media>=7){
            printf("%s sua media %f, sua situacao=aprovado\n", Nome, media);
        }else{
            printf("%s sua media %f, sua situacao=reprovado\n", Nome, media);
        }
    }

    return 0;
}
