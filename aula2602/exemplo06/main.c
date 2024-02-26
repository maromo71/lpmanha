#include <stdio.h>

int main() {
    int x;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &x);

    x % 2  == 0 ? printf("par\n") : printf("impar\n");
    return 0;
}
