#include <stdio.h>
#include <stdlib.h>
int main(void) {
    FILE * p_arquivo = NULL;
    //abrir para ler
    p_arquivo = fopen("C:\\arquivos\\frutas.txt", "r");
    //verificar se conseguiu encontrar o arquiv
    if (p_arquivo == NULL) {
        printf("Erro ao abrir arquivo. \n");
        exit(1);//forca a saida do programa
    }else {
        printf("Arquivo aberto com sucesso. \n");
    }
    //no final do programa, voce fechar o arquivo
    fclose(p_arquivo);
    return 0;
}
