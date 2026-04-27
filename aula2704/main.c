#include <stdio.h>

int main(void) {
    char velha[3][3] = {{'\0'}};
    int contador = 0;
    do {
        if (contador % 2 == 0) {
            printf("JOGADOR 1 \n");
        }else {
            printf("JOGADOR 2 \n");
        }
        int linha, coluna;
        printf("Digite sua jogada: \n");
        printf("Informe linha e coluna a ser jogada: \n");
        scanf("%d %d", &linha, &coluna);
        if (velha[linha-1][coluna-1] == 'X' || velha[linha-1][coluna-1] == 'O') {
            printf("JOGADA INVALIDA, REPITA \n");
            continue;
        }
        if (contador % 2 == 0) {
            velha[linha-1][coluna-1] = 'X';
        }else {
            velha[linha-1][coluna-1] = 'O';
        }

        contador++;
    }while (contador < 9);
    printf("MOSTRANDO O TABULEIRO \n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("[%c] ", velha[i][j]);
        }
        printf("\n");
    }
}
