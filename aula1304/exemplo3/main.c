#include <stdio.h>
int fibo(int n){
    if(n==1 || n==2)return 1;
    return fibo(n-1) + fibo(n-2);
}
int main() {
    printf("%d\n", fibo(8));

    return 0;
}
