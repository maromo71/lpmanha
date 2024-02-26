#include <stdio.h>

int main() {
    int x = 10;
    int y = 15;
    printf("Valor de x: %d \n", x);
    printf("Valor de y: %d \n", y);


    printf("Endereco de x: %d \n", &x);
    printf("Endereco de y: %d \n", &y);

    int z = x++ + y++;
    printf("Valor de z: %d \n", z);
    printf("Valor de x: %d \n", x);
    printf("Valor de y: %d \n", y);
    return 0;
}
