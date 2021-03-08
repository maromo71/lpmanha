#include <stdio.h>
#include <stdlib.h>
/*
Laço infinito, deve-se forçar saida
*/
int main()
{
    int z =0;
    for(int i=0; ; i++){
        z = z + 2;
        printf("%d ", z);
    }
    return 0;
}
