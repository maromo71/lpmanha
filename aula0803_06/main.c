#include <stdio.h>
#include <stdlib.h>
/*
Exemplo do comando while
*/
int main()
{
    int z = 30;
    //condição pré - testada
    while(z != 55){
        int x = z + 10;
        printf("Valor de x: %d \n", x);
        z = z + 1;
    }
    printf("Valor final de Z:  %d \n", z);
    return 0;
}
