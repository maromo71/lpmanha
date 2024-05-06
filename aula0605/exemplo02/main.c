#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE * po = NULL; //arquivo origem
    FILE * pd = NULL; //arquivo destino
    //Dois arquivos abertos
    po = fopen("/Users/marcosmoraes/dados/texto.txt", "r");
    pd = fopen("/Users/marcosmoraes/dados/copia.txt", "w");
    if(pd==NULL || po==NULL){
        printf("Erro ao abrir um dos dois arquivos. Verifique o caminho\n");
        exit(1);
    }
    //ler do arquivo origem e escrever no arquivo destino
    int ch;
    while( (ch=fgetc(po))!=EOF){
        fputc(ch, pd);
    }
    printf("Copia criada com sucesso.\n");
    //fechar os dois arquivos
    fclose(po);
    fclose(pd);
    return 0;
}
