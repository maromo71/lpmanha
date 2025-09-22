#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Digite o numero de voltas: \n");
        scanf("%d", &n);
    }while (n<1 || n>14);
    int melhorVolta =0;
    float melhorTempo =0.0f;
    float tempo;
    float soma = 0.0f;
    for (int i=1; i<=n; i++) {
        printf("Digite o tempo da volta: \n");
        scanf("%f", &tempo);
        if (i==1) {
            melhorTempo = tempo;
            melhorVolta = i;
        }
        if (tempo < melhorTempo) {
            melhorTempo = tempo;
            melhorVolta = i;
        }
        soma += tempo;
    }
    float media = (soma / (float) n);
    printf("Melhor Volta computada: %d \n", melhorVolta);
    printf("Melhor Tempo computado: %.2f\n", melhorTempo);
    printf("Media dos tempos: %.2f\n", media);
    return 0;
}