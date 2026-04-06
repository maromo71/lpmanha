#include <stdio.h>
/* Leia dois vetores de 5 elementos cada. Construa um terceiro
 * vetor de 10  elementos cujos valores sejam preenchidos de
 * forma intercalada (o primeiro elemento de A, o primeiro
 *  de B, o segundo de A, o segundo de B, e assim por diante
 *  */
int main(void) {
    int va[5], vb[5], vc[10];
    //preencher o primeiro vetor
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor de va: ");
        scanf("%d", &va[i]);
    }
    //preencher o segundo vetor
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor de vb: ");
        scanf("%d", &vb[i]);
    }
    //preencher o terceiro com valores intercalado de va e vb
    int cont = 0;
    for (int i = 0; i < 5; i++) {
        vc[cont++] = va[i];
        vc[cont++] = vb[i];
    }
    for (int i = 0; i < 5; i++) {
        printf("[%d] ", va[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("[%d] ", vb[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("[%d] ", vc[i]);
    }
    return 0;
}
