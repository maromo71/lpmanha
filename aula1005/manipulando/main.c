#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome_arquivo[51];
    printf("Digite o nome do arquivo a ser aberto: \n");
    scanf("%[^\n]s", nome_arquivo);

    FILE * fp = fopen(nome_arquivo, "r"); //Abrindo arquivo só para leitura (r)
    if(fp != NULL){
        printf("Arquivo aberto com sucesso \n");
        //Manipular os dados depois de aberto.
        //Aqui entra o codigo para manipular
        printf("Dados do arquivo.. \n");
        printf("Lista de frutas... \n");
        printf("------------------ \n");
        char ch;
        // Pegue o próximo o próximo caractere enquanto não for fim de arquivo
        while( (ch=fgetc(fp)) != EOF) {
            putchar(ch);
        }
        printf("------------------ \n");
        //Fecha o arquivo
        fclose(fp);
    }else{
        printf("Arquivo não encontrado \n");
    }
    return 0;
}
