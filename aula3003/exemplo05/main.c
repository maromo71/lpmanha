#include <iso646.h>
#include <stdio.h>

int main(void) {
    int x[30] = {0}; //Coloca 0 por definicao na primeira e 0 nas demais
    for (int i = 0; i < 30; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
    //dois vetores de tamanho 5
    int vetor1[5] = {1, 2, 3, 4, 5};
    double vetor2[5] = {9.0, 3.1, 4.2, 5.7, 67.8};

    double vet_soma[5];
    for (int i = 0; i < 5; i++) {
        vet_soma[i] = vetor1[i] + vetor2[i];
    }
    //percorrer mostrar o resultado
    for (int i = 0; i < 5; i++) {
        printf("%lf ", vet_soma[i]);
    }
    return 0;
}
