#include <stdio.h>

int fibonacci(int n);

int main(void) {
    int num;
    printf("Entre com um numero maior que 2: ");
    scanf("%d", &num);
    if (num < 2) {
        printf("Valor invalido\n");
        return 1;
    }
    printf("Seq: %d \n", fibonacci(num));
    return 0;
}

int fibonacci(int n) {
    if (n == 1 || n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
