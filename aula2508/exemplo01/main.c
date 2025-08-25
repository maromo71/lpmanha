#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b, resultado;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &a);
    printf("Digite um valor inteiro: \n");
    scanf("%d", &b);
    if (b!=0) { //boa pratica
        resultado = a / b;
    }else {
        printf("Impossivel calcular\n");
        exit(1);
    }
    printf("Resultado da div: %d \n", resultado);
    return 0;
}