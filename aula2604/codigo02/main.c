#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr_valor = NULL;
    int valor;
    printf("Digite o valor inteiro \n");
    scanf("%d", &valor);
    printf("Valor digitado: %d \n", valor);
    ptr_valor = &valor;
    printf("Valor digitado: %d \n", *ptr_valor);
    return 0;
}
