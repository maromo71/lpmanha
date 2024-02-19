#include <stdio.h>

int main() {
    int x, y;
    printf("Digite um valor para x: \n");
    scanf("%d", &x);
    printf("Valor de x: %d \n", x);
    printf("Endereco de x: %d \n", &x);
    printf("Endereco de y: %d \n", &y);


    return 0;
}
