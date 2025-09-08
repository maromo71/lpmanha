#include <stdio.h>
#define T 10
int main(void) {
    int v[T];
    //receber os dez dados
    for (int i = 0; i < T; i++) {
        printf("digite o %do) dado: ", i + 1);
        scanf("%d", &v[i]);
    }
    int soma = 0;
    //somar todos os elementos do vetor.
    for (int i=0; i<T; i++) {
        soma+= v[i];
    }
    printf("Somatoria: %d \n", soma);
    return 0;
}