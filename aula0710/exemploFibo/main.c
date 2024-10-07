#include <stdio.h>
int fibo(int n);

int main(void) {
    printf("Fibonnaci(12) = %d\n", fibo(12));
    return 0;
}

int fibo(int n) {
    if (n==1 || n==2) return 1;
    return fibo(n-2) + fibo(n-1);
}
