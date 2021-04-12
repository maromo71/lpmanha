#include <stdio.h>
#include <stdlib.h>
void up(int n);
int main()
{
    up(5);
    return 0;
}

void up(int n){
    if(n==0)return;
    up(n-1);
    printf("%d \n", n);
}
