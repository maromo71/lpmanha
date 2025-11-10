#include <stdio.h>

int main(void) {
    FILE * p_arquivo = NULL;
    //Abrindo no append (anexar) se nao existir, sera criado
    //caso contrario abre e posiciona no final para anexar
    //mais conteudo.
    p_arquivo = fopen("C:\\dados\\frutas.txt", "a");
    if (p_arquivo != NULL) {
        printf("Arquivo aberto ou criado com sucesso. \n");
    }else {
        printf("Erro ao abrir o arquivo \n");
    }
    return 0;
}