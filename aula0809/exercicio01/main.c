#include <stdio.h>
#define T 10
int main(void) {
    float notas[T];
    //entrada - receber 10 valores do usuario
    for (int i=0; i<T; i++) {
        printf("Digite a %da) nota: \n", i+1);
        scanf("%f", &notas[i]);
        if (notas[i] < 0 || notas[i]>10) {
            i--;
            printf("Nota invalida! Repita.\n");
        }
    }
    //encontrar a maior
    float maior = notas[0];
    for (int i=1; i<T; i++) {
        if (notas[i] > maior) maior = notas[i];
    }
    //qtde de ocorrencias do maior
    int qtd = 0;
    for (int i=0; i<T; i++) {
        if (notas[i] == maior) qtd++;
    }
    printf("Maior valor: %.2f \n", maior);
    printf("Qtde de ocorrencias: %d \n", qtd);
    return 0;
}