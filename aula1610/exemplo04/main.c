#include <stdio.h>

int fatorial(int n);

int main(void) {
    int x = 5;
    printf("Fatorial de %d = %d\n", x, fatorial(x));
    return 0;
}

int fatorial(int n) {
    if (n==1) return 1;
    return n * fatorial(n-1);
}
