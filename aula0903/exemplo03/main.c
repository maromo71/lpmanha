#include <stdio.h>

int main(void) {
    double soma = 0.0;
    for (int i=1, j=1; i<=30; i++, j+=2) {
        soma += i / (double)j;
    }
    printf("Somatoria: %.3f \n", soma);
    return 0;
}