#include <stdio.h>

int main(void) {
    FILE *p_arq = NULL;
    //associar ao arquivo texto.txt que esta na pasta arquivo
    p_arq = fopen("c:\\arquivo\\texto.txt", "r"); //para ler
    if (p_arq == NULL) {
        printf("Arquivo nao encontrado \n");
        return 1;
    }
    //ler os dados do arquivo e imprimir no console.
    int ch;
    while ((ch = fgetc(p_arq)) != EOF) {
        putchar(ch);
    }
    //fechar o arquivo
    fclose(p_arq);

    return 0;
}
