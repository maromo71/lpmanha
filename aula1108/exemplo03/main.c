#include <stdio.h>

int main(void)
{
    int a = 21;
    int b = 4;
    float x= (float)a / b;

    printf("Endereco de x: %d \n", &x);
    printf("Valor de x: %f \n", x);
    return 0;
}