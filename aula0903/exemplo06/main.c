#include <stdio.h>
//Enquanto a soma dos valores nao ultrapassara 500
//vou pedindo dados para o usuario
int main(void) {
    int num;
    int soma = 0, cont=0;
    while (soma <= 500) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma + num;
        cont++;
    }
    printf("Soma final: %d \n", soma);
    printf("Voce somou %d valores\n", cont);
    return 0;
}