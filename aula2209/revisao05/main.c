#include <stdio.h>
#define TM 3
#define TV 9
int main(void) {
    int matriz[TM][TM] = {{0}};
    int vetor[TV] = {0};
    int pos = 0;
    for (int i = 0; i < TM; i++) {
        for (int j = 0; j < TM; j++) {
            printf("Digite um valor: \n");
            scanf("%d", &matriz[i][j]);
            vetor[pos++] = matriz[i][j];
        }
    }
    printf("Vetor: \n");
    for (int i = 0; i < TV; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}