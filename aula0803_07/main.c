#include <stdio.h>
#include <stdlib.h>
/*
Exemplo do comando..:    do...while
*/

int main()
{
    int z = 54;
    do{
        int x = z + 10;
        printf("Valor de x: %d \n", x);
        z = z + 1;
    }while(z != 55);
    //condição pós - testada
    printf("Valor final de Z:  %d \n", z);
    return 0;
}
