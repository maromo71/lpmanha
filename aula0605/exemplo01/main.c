#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *pa = NULL;
    //abrir um arquivo
    pa = fopen("/Users/marcosmoraes/dados/texto.txt", "r");
    if(pa==NULL){
        printf("Arquivo não existe. \nImpossível abrir.\n");
        exit(1);
    }else{
        printf("Arquivo foi aberto com sucesso.\n");
    }
    //ler o arquivo
    int ch;
    int x = 0;
    printf("Conteúdo do arquivo:\n");
    while( (ch=fgetc(pa))!= EOF ){
        putchar(ch);
        x++;
    }
    printf("Total de caracteres: %d \n", x);

    //fechar o arquivo
    fclose(pa);
    printf("Arquivo fechado com sucesso.\n");
    return 0;
}
