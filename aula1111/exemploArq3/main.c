#include <stdio.h>

int main(void) {
    FILE *p_arq1 = NULL;
    FILE *p_arq2 = NULL;
    //associar ao arquivo segundo.txt para ler
    p_arq1 = fopen("c:\\arquivo\\segundo.txt", "r"); //para ler
    if (p_arq1 == NULL) {
        printf("Arquivo nao encontrado \n");
        return 1;
    }
    //associar ao arquivo terceiro.txt
    p_arq2 = fopen("c:\\arquivo\\terceiro.txt", "w");
    //gravar dados dentro do arquivo

    //1 forma char a char copiar do segundo e gravar no tercero
    char ch;
    while ((ch = fgetc(p_arq1)) != EOF) {
        fputc(ch, p_arq2);
    }
    printf("Arquivo copiado com sucesso\n");
    //2 segunda forma. Conteudo direto
    //fprintf(p_arq, frutas);
    //fputc('\n', p_arq);
    //fechar o arquivo
    fclose(p_arq1);
    fclose(p_arq2);

    return 0;
}
