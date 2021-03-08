#include <stdio.h>
#include <stdlib.h>
/*
Cuidado com ";" depois do for
*/
int main()
{
    int i;
    for(i =0; i<=100; i++);{
        printf("%d \n", i);
    }
    printf("%d \n", i);
    return 0;
}
