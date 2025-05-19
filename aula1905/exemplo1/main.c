#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p_a = &a;
    printf("Valor de a: %d \n", a);
    printf("Valor de a, usando ponteiro: %d \n", *p_a);
    printf("Endereco de a: %d \n", &a);
    printf("Endereco de a, usando ponteiro: %d \n", p_a);
    printf("Endereco do ponteiro: %d \n", &p_a);
    return 0;
}