#include <stdio.h>
//Soma de dez valores armazenados em um vetor
//Media dos dez elementos
int main(void) {
    int nums[10];
    int soma = 0;
    double media = 0.0;
    //Entrada de 10 valores
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor: \n");
        scanf("%d", &nums[i]);
        //faco a somatoria
        soma += nums[i]; //soma = soma + nums[i];
    }
    //calculo a media
    media = soma / 10.0;
    printf("Soma dos elementos: %d \n", soma);
    printf("Media dos elementos: %.2lf \n", media);
    return 0;
}
