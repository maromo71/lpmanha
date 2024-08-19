#include <stdio.h>

int main(void) {
    int n, melhor_volta; //numero de voltas dadas (0<n<15)
    double tempo, melhor_tempo, soma=0.0, media;
    do{
        printf("Digite o numero de voltas: \n");
        scanf("%d", &n);
    }while(n<=0 || n>=15);
    for (int i = 1; i <=n; i++) {
        //recebe o tempo da volta
        printf("Digite o tempo registrado na volta %d: \n", i);
        scanf("%lf", &tempo);
        if(i==1 || tempo < melhor_tempo) {
            melhor_tempo = tempo;
            melhor_volta = i;
        }
        soma+=tempo; //somar os tempos das voltas
    }
    media = soma / n; //soma divide pelo numero de voltas
    printf("Melhor tempo: %.2lf \n", melhor_tempo);
    printf("Melhor volta: %i \n", melhor_volta);
    printf("Média dos tempos: %.2lf \n", media);
    return 0;
}
