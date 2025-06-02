#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ch;
    //FILE * p_arq = fopen("C:\\pasta\\novo.txt", "a");
    FILE * p_arq = fopen("/Users/marcosmoraes/novo.txt", "a");
    if (p_arq == NULL) {
        printf("Arquivo desconhecido \n");
        exit(1);
    }
    char nome[51];
    printf("Digite a fruta a ser acrescentada: \n");
    fgets(nome, sizeof(nome), stdin);
    fprintf(p_arq, "%s", nome);
    printf("Fruta gravada no arquivo\n");
    fclose(p_arq);
    return 0;
}