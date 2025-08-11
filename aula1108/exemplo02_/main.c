#include <stdio.h>
int imprimir(int valor);
int valor = 15;
int main(void)
{
    //Variavel dentro da funcao
    printf("Valor = %d\n", valor);
    printf("Local da memoria: %d \n", &valor);
    int valor = 10;
    printf("Local da memoria: %d \n", &valor);
    imprimir(valor);
    printf("Valor = %d\n", valor);
    return 0;
}

int imprimir(int valor)
{
    valor = valor + 1;
    printf("Valor = %d\n", valor);
    printf("Local da memoria: %d \n", &valor);
}