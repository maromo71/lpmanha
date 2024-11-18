#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *p_arq = NULL;
    //associar ao arquivo segundo.txt que nao esta ainda na pasta arquivo
    p_arq = fopen("c:\\arquivo\\segundo.txt", "a"); //para escrever
    if (p_arq == NULL) {
        printf("Arquivo nao encontrado \n");
        return 1;
    }
    //gravar dados dentro do arquivo
    char frutas[51];
    fflush(stdin);
    printf("Digite o nome da Fruta que comprou: \n");
    scanf("%[^\n]", frutas);
    //1 forma char a char
    for (int i = 0; i < strlen(frutas); i++) {
        fputc(frutas[i], p_arq);
    }
    fputc('\n', p_arq);
    //2 segunda forma. Conteudo direto
    fprintf(p_arq, frutas);
    fputc('\n', p_arq);
    //fechar o arquivo
    fclose(p_arq);

    return 0;
}
