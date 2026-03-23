/*
 *  Faça um programa que receba 10 dados do usuário e mostre
 *  a média dos valores entrados pelo usuário, use a estrutura
 *  while, para receber dez valores ou sair quando o usuário
 *  entrar com o valor 0
 */
#include <stdio.h>

int main(void) {
    int cont = 0;
    int n;
    double media =0.0;
    do {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n == 0) break;
        cont++;
        media += n;
    }while (cont!=10);
    printf("Media dos valores: %.2lf \n", media/cont);
    return 0;
}