#include <stdio.h>
#include <stdlib.h>
/*
Conteúdo: uso comum do comando for
*/
int main()
{
    for(int i = 1; i <= 100; i++){
        printf("%3d ", i);
        if(i % 10 ==0) {
           printf("\n");
        }
    }
    printf("Acabou... \n");
    return 0;
}
