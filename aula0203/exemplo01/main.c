#include <stdio.h>

int main(void) {
    //Valor 0 == falso
    int x;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &x);
    if (x) {
        printf("Valor digitado: %d \n", x);
    }else {
        printf("Valor digitado foi ZERO \n");
    }
    return 0;
}