#include <stdio.h>

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
    return 0;
}