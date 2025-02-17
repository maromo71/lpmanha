#include <stdio.h>

int main(void) {
    int a = 15;
    int b = 30;
    printf("Endereco de a: %lld \n", &a);
    printf("Endereco de b: %lld \n", &b);
    return 0;
}