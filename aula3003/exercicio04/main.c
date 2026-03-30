#include <stdio.h>

int ehQuadradoMagico(int n, int mat[n][n]);

int main(void) {
    //O exemplo abaixo eh um quadrado magico
    int matriz[3][3] = {
        {12, 2, 16},
        {14, 10, 6},
        {4, 18, 8}
    };
    if (ehQuadradoMagico(3, matriz)) {
        printf("Eh quadrado magico\n");
    }else {
        printf("Nao eh quadrado magico\n");
    }
    return 0;
}

int ehQuadradoMagico(int n, int mat[n][n]) {
    int somaRef = 0, somaD1 = 0, somaD2 = 0;

    for (int j = 0; j < n; j++) somaRef += mat[0][j];

    for (int i = 0; i < n; i++) {
        int somaL = 0, somaC = 0;
        for (int j = 0; j < n; j++) {
            somaL += mat[i][j];
            somaC += mat[j][i];
        }
        if (somaL != somaRef || somaC != somaRef) return 0;
        somaD1 += mat[i][i];
        somaD2 += mat[i][n - 1 - i];
    }

    return (somaD1 == somaRef && somaD2 == somaRef);
}