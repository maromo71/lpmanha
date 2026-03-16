#include <stdio.h>

int main(void) {
    int n, x;
    do { //validacao [1..100]
        printf("Digite um numero de valores a ser somado [1..100]:  ");
        scanf("%d", &n);
    }while (n<1 || n>100);
    //para repetir n vezes
    int soma = 0;
    for (int i=1; i<=n; i++) {
        printf("Digite o %do valor: ", i);
        scanf("%d", &x);
        soma += x;
    }
    printf("A soma dos valores eh: %d", soma);
    return 0;
}