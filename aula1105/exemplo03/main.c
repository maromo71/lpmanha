#include <stdio.h>
int soma(int n);
int main(void) {
    int n;
    printf("Digite um numero maior que 0: ");
    scanf("%d", &n);
    printf("Somatoria: %d", soma(n));
    return 0;
}

int soma(int n) {
    if (n == 1) return 1;
    return n + soma(n-1);
}
