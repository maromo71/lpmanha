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
    if (n == 0) return 0;
    if (n % 2 == 1) {
        soma(n - 1);
    }else {
        return n + soma(n-2);
    }

}
