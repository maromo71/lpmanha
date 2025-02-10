#include <stdio.h>

int main(void) {
    double grao = 1;
    double total = 0;
    for (int i=1; i<=64; i++) {

        total += grao;
        printf("grao: %.0f \n", total);
        grao *= 2;
    }
    printf("Letra: %.0f \n", total);
    return 0;
}