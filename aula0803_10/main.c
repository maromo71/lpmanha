#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = 3;
    int x = a++ + b++ + c++;
    //int x = ++a + ++b + ++c;
    printf("Valor de x: %d \n", x);
    printf("Valores de a, b, e c respec:  %d %d %d \n", a, b, c);
    return 0;
}
