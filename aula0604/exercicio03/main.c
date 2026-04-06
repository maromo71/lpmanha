#include <stdio.h>

int main(void) {
    int vetor[12];
    int cont_par = 0;
    for (int i = 0; i<12; i++) {
        printf("Digite o valor: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) cont_par++;
    }
    printf("Quantidade de pares: %d\n", cont_par);
    return 0;
}
