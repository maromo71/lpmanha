#include <stdio.h>

int main(void) {
    int n, soma = 0;
    do{
        do{
            printf("Digite um valor [0-50] \n");\
            scanf("%d", &n);
        }while(n<0|| n>50);
        soma+= n;
    }while(n);
    printf("Valor da soma: %d \n", soma);
    return 0;
}
