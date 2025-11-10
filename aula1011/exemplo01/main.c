#include <stdio.h>

int main(void) {
    //Ponteiro para o arquivo frutas.txt
    FILE *p_arquivo = NULL; //p_arquivo eh o ponteiro
    //Apontar para o arquivo frutas.txt (se nao existir, sera criado)
    p_arquivo = fopen("C:\\dados\\frutas.txt", "w");
    //Testando para ver se o arquivo foi criado ou nao
    if (p_arquivo != NULL) {
        printf("Arquivo criado com sucesso. Vazio\n");
    }else {
        printf("Falha ao criar o arquivo \n");
    }

    return 0;
}