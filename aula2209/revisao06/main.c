#include <stdio.h>

int main(void) {
    double soma = 0;
    int x = 1, y = 1;
    while (y <= 99) {
        soma += ((double)x / y);
        x++; // x = x + 1
        y+=2; // y = y + 2
    }
    printf("Soma = %lf\n", soma);
    return 0;
}