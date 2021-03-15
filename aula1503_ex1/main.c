#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[10];
    for(int i=0; i<10; i++){
        printf("Digite um numero:  \n");
        scanf("%d", &nums[i]);
    }
    for(int i=0; i<10; i++){
        printf("Posicao %d => %d \n", i, nums[i]);
    }

    return 0;
}
