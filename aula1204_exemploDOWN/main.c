#include <stdio.h>
#include <stdlib.h>
void down(int n);
int main()
{
    down(5);
    return 0;
}

void down(int n){
    if(n==0)return;
    printf("%d \n", n);
    down(n-1);
}
