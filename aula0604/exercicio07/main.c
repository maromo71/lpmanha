#include <stdio.h>
//Crie dois vetores A e B de 10 elementos cada.
//Gere um terceiro vetor C onde cada elemento C[i]
//seja a soma de A[i] + B[i]. Exiba o vetor C.
int main(void) {
    int A[10], B[10], C[10]; //Tres vetores
    //Pedir valores para o vetor A
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor inteiro para o vetor A: \n");
        scanf("%d", &A[i]);
    }
    //Pedir valores para o vetor B
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor inteiro para o vetor B: \n");
        scanf("%d", &B[i]);
    }
    //Somar e imprimir o vetor resultante
    //Somar no vetor C
    for (int i = 0; i < 10; i++) {
        C[i] = A[i] + B[i]; //logica principal = somar os valores por posicao
        printf("[%d] ", C[i]);
    }
    return 0;
}
