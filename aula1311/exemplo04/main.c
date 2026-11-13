#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    FILE * p_origem = NULL;
    FILE * p_destino = NULL;
    //abrir para ler
    p_origem = fopen("C:\\arquivos\\frutas.txt", "r");
    //abrir para gravar
    p_destino = fopen("C:\\arquivos\\copia.txt", "w");

    //verificar se conseguiu encontrar o arquivo
    if (p_origem == NULL || p_destino == NULL) {
        printf("Erro ao abrir arquivo. \n");
        exit(1);//forca a saida do programa
    }else {
        char letra;
        while ((letra = fgetc(p_origem)) != EOF) {
            fputc(letra, p_destino);
        }
        printf("Copia efetuada com sucesso.\n");
    }
    //no final do programa, voce deve fechar os dois arquivo
    fclose(p_origem);
    fclose(p_destino);
    return 0;
}