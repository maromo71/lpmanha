#include <stdio.h>
#include <stdlib.h>
/*
La?o sem conte?do, gera tempo de espera.
*/
int main()
{
    printf("Comecou o programa \n");
    for(int i=0; i<1000000000; i++);
    printf("Terminou a espera!\n");
    return 0;
}
