#include <stdio.h>
/*
*Escreva um programa que leia a idade de um cliente e determine o
desconto em uma compra. Se a idade for menor que 18 anos,
ele recebe 5% de desconto. Se tiver entre 18 e 60 anos,
*  10% de desconto. Se for maior que 60
anos, recebe 15% de desconto. Use a estrutura if-else.
 */
int main(void) {
    int idade;
    printf("Digite a idade: \n");
    scanf("%d", &idade);
    if (idade < 18) {
        printf("Desconto de 5%% \n");
    }else if (idade <=60) {
        printf("Desconto de 10%% \n");
    }else {
        printf("Desconto de 15%% \n");
    }
    return 0;
}
