#include <stdio.h>

int main(void) {
    int x;
    printf("Digite o valor: \n");
    scanf("%d", &x);
    x % 2 == 0 ? printf("par\n") : printf("impar\n");
    return 0;
}
