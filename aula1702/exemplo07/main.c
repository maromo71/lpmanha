#include <stdio.h>

int main(void) {
    int a = 2, b = 3, c = 4;
    int x = a++ + b++ + c--;

    printf("Valor de x: %d \n", x);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);

    printf("Tam em bytes de um int: %llu \n", sizeof(long long));
    return 0;
}