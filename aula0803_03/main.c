#include <stdio.h>
#include <stdlib.h>
/*
La?o infinito, deve-se for?ar saida
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
