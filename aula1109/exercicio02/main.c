#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um valor inteiro maior que 1: \n");
    scanf("%d", &n);
    int primo = 1;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }
    if (primo) {
        printf("O numero %d eh primo \n", n);
    }else {
        printf("O numero %d nao eh primo \n", n);
    }
    return 0;
}
