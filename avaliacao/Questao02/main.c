#include <stdio.h>

int main(void) {
    double soma = 0.0;
    double num = 1.0, den = 1.0;
    for (int i = 1, j=1; i <= 30; i++) {
        soma+= num / den;
        num+= 2.0;
        den+= 1.0;
    }
    printf("Soma: %.2lf\n", soma);
    return 0;
}