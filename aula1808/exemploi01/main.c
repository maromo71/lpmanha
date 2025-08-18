#include <stdio.h>

int main(void)
{
    unsigned int x = 2147483650;
    printf("Tamanho em memoria de x: %d em bytes\n", sizeof(x));
    printf("Valor de x: %u \n", x);
    return 0;
}