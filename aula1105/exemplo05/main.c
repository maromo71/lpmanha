#include <stdio.h>
#include "somatoria.h"
int main(void) {
    int n;
    printf("Digite um numero maior que 0: ");
    scanf("%d", &n);
    printf("Somatoria: %d", soma(n));
    return 0;
}

