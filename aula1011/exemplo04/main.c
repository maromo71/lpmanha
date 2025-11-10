#include <stdio.h>
#include <string.h>

int main(void) {
    FILE * p_arq = NULL;
    //Modo r (apenas ler o arquivo)
    p_arq = fopen("C:\\dados\\frutas.txt", "r");
    if (p_arq == NULL) {
        printf("Arquivo inexistente. Erro ao tentar abrir\n");
        return 0;
    }
    //deste ponto para frente faremos a leitura dos dados
    //e imprimir na tela
    int ch;
    while ((ch = fgetc(p_arq)) != EOF) {
        printf("%c", ch);
    }
    fclose(p_arq);
    //Inclusao de uma nova palavra.
    char nome_fruta[30];
    fflush(stdin);
    printf("Digite o nome da nova fruta: \n");
    gets(nome_fruta);
    //Abrir novamente o arquivo para anexa
    p_arq = fopen("C:\\dados\\frutas.txt", "a");
    for (int i = 0; i < strlen(nome_fruta); i++) {
        fputc(nome_fruta[i], p_arq);
    }
    fputc('\n', p_arq);
    fclose(p_arq);
    return 0;
}
