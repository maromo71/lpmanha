#include <stdio.h>

int main(void) {
    int a, b, r;
    printf("Digite dois valores separados por um espaco\n");
    scanf("%d%d", &a, &b);
    if (b) {
        r = a / b;
    } else {
        printf("Impossivel dividir por zero\n");
        return 1;
    }
    printf("Resultado ====> %d \n ", r);
    return 0;
}