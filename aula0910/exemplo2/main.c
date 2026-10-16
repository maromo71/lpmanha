#include <stdio.h>
#define TAM 7
int main(void) {
    int matriz[TAM][TAM];
    int inicioLinha = 0;
    int fimLinha = TAM - 1;
    int inicioColuna = 0;
    int fimColuna = TAM - 1;
    int cont = 1;
    while (cont <= TAM * TAM) {
        //preencher da esq para a direita
        for (int coluna = inicioColuna; coluna <= fimColuna; coluna++) {
            matriz[inicioColuna][coluna] = cont++;
        }
        inicioLinha++;
        //preencher de cima para baixo
        for (int linha = inicioLinha; linha<= fimLinha; linha++) {
            matriz[linha][fimColuna] = cont++;
        }
        fimColuna--;
        //preecher da dir para a esquerda
        for (int coluna=fimColuna; coluna>=inicioColuna; coluna--) {
            matriz[fimLinha][coluna] = cont++;
        }
        fimLinha--;
        //preencer de baixo para cima
        for (int linha = fimLinha; linha>=inicioLinha; linha--) {
            matriz[linha][inicioColuna] = cont++;
        }
        inicioColuna++;
    }
    //percorrer e exibir
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("[%2d] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
