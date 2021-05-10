#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fin, * fout; /* fin para entrada, fout para saida */
    int ch; /*Inteiro para ler os caracteres */
    char * origem;
    char * destino;
    printf("Digite o arquivo de origem: \n");
    scanf("%[^\n]s", origem);

    while(ch=getchar()!='\n');

    printf("Digite o arquivo de destino: \n");
    scanf("%[^\n]s", destino);

    while(ch=getchar()!='\n');


    /* Abrir o Arquivo de Origm */
    fin = fopen(origem, "r");
    /*
    if(fin==NULL) {
        printf("Impossível abrir o arquivo %s\n", origem);
        exit(2);
    }
    /* Abrir o Arquivo de destino /
    fout = fopen(destino, "w+");

    while ((ch=fgetc(fin))!=EOF){
        fputc(ch, fout);
    }
    fclose(fin);
    fclose(fout);
*/
    return 0;

}
