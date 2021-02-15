#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float x;
    a = 25;
    b = 2;
    x = a + b;
    printf("Valor resultado: %f \n", x);
    x = a - b;
    printf("Valor resultado: %f \n", x);
    x = a * b;
    printf("Valor resultado: %f \n", x);
    x = (float)a / b; //casting -> promocao de tipo
    printf("Valor resultado: %f \n", x);
    return 0;
}
