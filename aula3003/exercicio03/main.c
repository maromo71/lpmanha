#include <stdio.h>

void imprimirTransposta(int n, int m, float mat[n][m]);

int main(void) {
    int n, m;
    printf("Linhas e Colunas: ");
    scanf("%d %d", &n, &m);

    float matriz[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    imprimirTransposta(n, m, matriz);
    return 0;
}

void imprimirTransposta(int n, int m, float mat[n][m]) {
    printf("\nMatriz Transposta:\n");
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            printf("%.1f ", mat[i][j]);
        }
        printf("\n");
    }
}
