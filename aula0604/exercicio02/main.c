#include <stdio.h>

int main(void) {
    double vetor[8]; //vetor com 8 posicoes
    double maior, menor;
    for (int i = 0; i < 8; i++) {
        printf("Digite um valor real: \n");
        scanf("%lf", &vetor[i]);
        if (i == 0) { //apenas na primeira vez
            maior = vetor[0];
            menor = vetor[0];
        }
        if (maior < vetor[i]) maior = vetor[i];
        if (menor > vetor[i]) menor = vetor[i];
    }
    printf("Maior valor: %lf\n", maior);
    printf("Menor valor: %lf\n", menor);
    return 0;
}
