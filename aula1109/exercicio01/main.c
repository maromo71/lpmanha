#include <stdio.h>
//M = massa em gramas
//C = quantos ciclos de 50 anos ?
//MC = massa em cada ciclo
int main(void) {
    double M;
    int C;
    printf("Digite o valor da massa inicial em Gramas: \n");
    scanf("%lf", &M);
    printf("Digite o numero de ciclos a serem investigados: \n");
    scanf("%d", &C);
    double MC = M;
    for (int i = 0; i < C; i++) {
        MC = MC / 2;
        printf("Massa no ciclo %d = %.2lf em gramas \n", i+1, MC );
        printf("Massa residual em porcentagem: %.2lf %%\n", (MC / M) * 100);
    }
    return 0;
}
