#include <stdio.h>

void modificar_a(int *p_a);

int main(void)
{
    int a = 15;
    modificar_a(&a);
    printf("%d\n", a);
    return 0;
}

void modificar_a(int *p_a)
{
    *p_a = 55;
}