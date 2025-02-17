#include <stdio.h>
int a =1,  b=2;

int somar(int a, int b) {
    return a + b;
}

int main(void) {
    int x, y;
    printf("Digite valor de x: \n");
    scanf("%d", &x);
    printf("Digite valor de y: \n");
    scanf("%d", &y);
    printf("Valor da soma: %d\n", somar(x, y));
    return 0;
}