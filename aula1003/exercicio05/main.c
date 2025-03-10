#include <stdio.h>

int main(void) {
    int n, maior, menor;
    double soma = 0.0, media = 0.0;
    for (int i = 1; i <= 5; i++) {
        printf("Digite o %d0) valor: \n", i);
        scanf("%d", &n);
        if (i == 1) {
            maior = n;
            menor = n;
        }
        if (n > maior) maior = n;
        if (n < menor) menor = n;
        soma += n;
    }
    media = soma / 5;
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", media);
    return 0;
}