#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
     setlocale(LC_ALL, "pt_BR.UTF-8");
     FILE * p_arquivo = NULL;
    //abrir para ler
    p_arquivo = fopen("C:\\arquivos\\frutas.txt", "r");
    //verificar se conseguiu encontrar o arquivo
    if (p_arquivo == NULL) {
        printf("Erro ao abrir arquivo. \n");
        exit(1);//forca a saida do programa
    }else {
        printf("Arquivo aberto com sucesso. \n");
        //ler o conteudo e imprimir tela
        char letra;
        while ((letra = fgetc(p_arquivo)) != EOF) {
            printf("%c", letra);
        }
    }
    //no final do programa, voce fechar o arquivo
    fclose(p_arquivo);
    return 0;
}
