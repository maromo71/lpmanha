#include <stdio.h>
#define T 3
int main(void) {
    int m[T][T];
    int m2[T][T]; //m2 será nossa matriz transposta
    //ler
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("Digite o elemento da coordenada [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    //transposição para matriz m2
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            m2[i][j] = m[j][i]; //basta trocar as coordenadas
        }
    }
    //impressao da matriz
    printf("Matriz transposta de m:\n");
    for (int i = 0; i < T; i++){
        for (int j = 0; j < T; j++){
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}