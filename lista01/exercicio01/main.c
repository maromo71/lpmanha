#include <stdio.h>
//1. Validar a entrada do numero de voltas
//2. Computar o tempo e fazer os calculos
//   em um laço que contemple o numero de vio
int main(void) {
    int n;
    //1
    do {
        printf("Digite o numero de voltas [1..14]\n");
        scanf("%d", &n);
    }while (n<=0 || n>=15);
    //2
    double tempo_da_volta=0.0, melhor=0.0;
    int melhor_volta = 0;
    for (int i=1; i<=n; i++) {
        printf("Digite o tempo da volta %d \n", i);
        scanf("%lf", &tempo_da_volta);
        if (i==1) {
            melhor_volta = i;
            melhor = tempo_da_volta;
        }
        if (tempo_da_volta < melhor) {
            melhor = tempo_da_volta;
            melhor_volta = i;
        }
    }
    printf("Melhor tempo registrado: %.2lf \n", melhor);
    printf("Volta em que ocorreu este tempo: %d \n", melhor_volta);
    return 0;
}