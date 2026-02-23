#include <stdio.h> //incluir bibliotecas

int main(void) {
    int x = 10;
    int y = 0;
    printf("Valor de x: %d \n", x);
    printf("Valor de y: %d \n", y);
    printf("Endereco de x: %d \n", &x);
    printf("Endereco de y: %d \n", &y);

    return 0;
}