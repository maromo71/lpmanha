#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ch;
    //FILE * p_arq = fopen("C:\\pasta\\novo.txt", "r");
    FILE * p_arq = fopen("/Users/marcosmoraes/novo.txt", "r"); //mac
    if (p_arq == NULL) {
        printf("Arquivo desconhecido \n");
        exit(1);
    }else {
        printf("Arquivo aberto com sucesso \n");
    }
    printf("Exibindo o conteudo do arquivo\n");
    while ((ch = fgetc(p_arq)) != EOF) {
        putchar(ch);
    }
    printf("Termino do arquivo \n");
    //fechar o arquivo
    fclose(p_arq);
    printf("Arquivo fechado com sucesso\n");
    return 0;
}