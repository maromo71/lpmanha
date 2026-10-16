#include <stdio.h>

void linhaNx(int qtd) {
    for (int i = 0; i < qtd; i++) {
        putchar('*');
    }
    printf("\n");
}
int main(void) {
    linhaNx(3);
    linhaNx(5);
    linhaNx(7);
    return 0;
}
