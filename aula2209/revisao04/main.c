#include <stdio.h>
#define T 5
//Receber 5 dados do usuario coloca-los em um vetor
//Separar os pares colocar em outro vetor
//Separar os impares colocar em outro vetor
int main(void) {
    int vetor[T]={0}, vetorPar[T]={0}, vetorImpar[T]={0};
    for (int i = 0; i < T; i++) {
        printf("Digite um valor inteiro: \n");
        scanf("%d", &vetor[i]);
    }
    int contpar = 0;
    int contimpar = 0;
    for (int i = 0; i < T; i++) {
        if (vetor[i] % 2 == 0) {
            vetorPar[contpar] = vetor[i];
            contpar++;
        }else {
            vetorImpar[contimpar] = vetor[i];
            contimpar++;
        }
    }
    printf("Vetor principal: \n");
    for (int i = 0; i < T; i++) {
        printf("[%d ] ", vetor[i]);
    }
    printf("\n");
    printf("Vetor par: \n");
    for (int i=0; i < contpar; i++) {
        printf("[%d ] ", vetorPar[i]);
    }
    printf("\n");
    printf("Vetor impar: \n");
    for (int i=0; i < contimpar; i++) {
        printf("[%d ] ", vetorImpar[i]);
    }
    printf("\n");
    return 0;
}