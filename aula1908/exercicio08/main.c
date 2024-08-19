#include <stdio.h>
/**
 * Faça um programa que receba 10 dados do usuário e mostre a média
 * dos valores entrados pelo usuário, use a estrutura while,
 * para receber dez valores ou sair quando o usuário entrar com o valor 0.
 */
int main(void) {
    double soma=0.0, media=0.0;
    int n=1, cont=0; //numero .. n igual para forcar a entrada
    while(cont < 10 && n !=0){
        cont++;
        printf("Digite o %do) valor\n", cont);
        scanf("%d", &n);
        soma += n;  // soma = soma + n
    }
    media = soma / cont;
    printf("Media dos valores entrados: %.2lf \n", media);
    return 0;
}
