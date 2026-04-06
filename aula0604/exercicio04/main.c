#include <stdio.h>

int main(void) {
    int vetor[10];
    //pedir dez dados
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor inteiro: \n");
        scanf("%d", &vetor[i]);
    }
    //Exibir os dez da ultima ate a primeira posicao
    for (int i=9; i>=0; i--) {
        printf("[%d] ", vetor[i]);
    }
    printf("\n"); //pular uma linha so no final
    return 0;
}
