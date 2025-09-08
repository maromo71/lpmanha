#include <stdio.h>
#define T 15
int main(void) {
    int vetor[T];
    //Entrada do usuario
    for (int i = 0; i < T; i++) {
        printf("Digite o %do) numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    //mostrar invertido
    for (int i = T-1; i>=0; i--) {
        printf("O numero pos %d eh: %d\n", i, vetor[i]);
    }
    return 0;
}