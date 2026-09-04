#include <stdio.h>

int main(void) {
    double velocidade, acumulador=0;
    for (int sensor=1; sensor<=10; sensor++) {
        printf("Digite a velocidade registrada no sensor %d\n ", sensor);
        scanf("%lf", &velocidade);
        acumulador += velocidade;
    }
    double media = acumulador/10;
    printf("A media de velocidade eh: %.2lf\n", media);
    return 0;
}
