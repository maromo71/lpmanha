#include <stdio.h>
void up(int n) {
    if (n <= 0) return;
    up(n-1);
    printf("%d\n", n);
}
void up_for(int n) {
    for (int i = 1; i<= n; i++) {
        printf("%d", i);
    }
}

void down(int n) {
    if (n <= 0) return;
    printf("%d\n", n);
    down(n-1);
}

int main(void) {
    int valor;
    printf("Digite o valor inicial > 0 \n");
    scanf("%d", &valor);
    up(valor);
    down(valor);
    return 0;
}