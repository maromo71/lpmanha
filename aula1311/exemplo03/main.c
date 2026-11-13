#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
     setlocale(LC_ALL, "pt_BR.UTF-8");
     FILE * p_arquivo = NULL;
    //abrir para ler e acrescentar (append)
    p_arquivo = fopen("C:\\arquivos\\frutas.txt", "a");
    //verificar se conseguiu encontrar o arquivo
    if (p_arquivo == NULL) {
        printf("Erro ao abrir arquivo. \n");
        exit(1);//forca a saida do programa
    }else {
        printf("Arquivo aberto com sucesso. \n");
        //pedir uma nova fruta e colocar dentro do arquivo
        char fruta[15];
        printf("Digite a nova fruta: \n");
        scanf("%s", fruta);
        fprintf(p_arquivo, "%s\n", fruta);
        printf("Fruta gravada com sucesso. \n");
    }
    //no final do programa, voce fechar o arquivo
    fclose(p_arquivo);
    return 0;
}
