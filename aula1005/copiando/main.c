#include <stdio.h>
#include <stdlib.h>


int main() {
    char nome1[51];
    char nome2[51];

    printf("Digite o nome do arquivo de origem: \n");
    scanf("%[^\n]s", nome1);
    while(getchar()!='\n');

    printf("Digite o nome do arquivo de destino: \n");
    scanf("%[^\n]s", nome2);
    while(getchar()!='\n');

    FILE *fin, *fout; /* fin para entrada, fout para saida */
    int ch; /*Inteiro para ler os caracteres */
    /* Testar a linha de comando */
   /* Abrir o Arquivo argv[1] (Origem) */
    fin = fopen(nome1, "rb");
    if(fin==NULL){
        printf("Impossível abrir o arquivo \n");
        exit(1);
    }
    /* Abrir o Arquivo argv[2] (destino) */
    if ((fout=fopen(nome2, "w+"))==NULL)
    {
        printf("Impossível criar o arquivo \n");
        exit(2);
    }
    while ((ch=fgetc(fin))!=EOF){
        fputc(ch, fout);
    }
    printf("Arquivo copiado com sucesso. Veja no diretório.\n");
    fclose(fin);
    fclose(fout);
    return 0;
}
