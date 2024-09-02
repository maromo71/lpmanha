#include <stdio.h>
#include "conversor.h"

int main(void) {
    printf("Conversor de Temperatura \n");
    double celsius, fah;
    int opcao=0;
    printf("Digite 1 para Fah para Celsius\n");
    printf("Digite 2 para Celsius para Fah \n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Digite a temp em Fah: \n");
            scanf("%lf", &fah);
            printf("Temp em Celsius %.2lf \n", converterParaCelsius(fah));
            break;
        case 2:
            printf("Digite a temp em Celsius: \n");
            scanf("%lf", &celsius);
            printf("Temp em Fahrenheit %.2lf \n", converterParaFah(celsius));
            break;
        default:
            printf("Opcao invalida\n");
    }
    return 0;
}
