#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 12;
    int b = 0;
    int * pa= &a;

    printf("Valor de pa: %d\n", *pa);
    a = 15;
    b = *pa;
    printf("Valor de b: %d\n", b);
    printf("Valor de a, b, pae * pa--> %d %d %d %d\n", a,b,pa,*pa);
    return 0;
}
