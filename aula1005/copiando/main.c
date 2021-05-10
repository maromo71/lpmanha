#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fin, *fout; /* fin para entrada, fout para saida */
    int ch; /*Inteiro para ler os caracteres */
    /* Testar a linha de comando */
   /* Abrir o Arquivo argv[1] (Origem) */
    fin = fopen("texto.txt", "rb");
    if(fin==NULL){
        printf("Impossível abrir o arquivo \n");
        system("PAUSE");
        exit(2);
    }
    /* Abrir o Arquivo argv[2] (destino) */
    if ((fout=fopen("saida2.txt", "wb"))==NULL)
    {
        printf("Impossível criar o arquivo \n");
        system("PAUSE");
        exit(3);
    }
    while ((ch=fgetc(fin))!=EOF){
        fputc(ch, fout);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
