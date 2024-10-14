#include <stdio.h>

int main(void) {
    int x = 10;
    int y = 15;
    printf("Valor de x: %d \n", x);
    printf("Endereco de x: %ld \n", &x);
    printf("Valor de y: %d \n", y);
    printf("Endereco de y: %ld \n", &y);
    int *px = &x;
    printf("Valor de x: %d \n", *px);
    printf("Endereco de x: %ld \n", px);
    return 0;
}
