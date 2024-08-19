#include <stdio.h>

int main(void) {
    //testa a condicao antes da entrada do laco
    int soma =0;
    while(soma < 50){
        int x;
        printf("Digite um valor inteiro: \n");
        scanf("%d", &x);
        soma += x;
    }
    printf("Valor atual de soma: %d \n", soma);
    return 0;
}
