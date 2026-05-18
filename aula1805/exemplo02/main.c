#include <stdio.h>
void inverter(int *p1, int *p2);
int main(void) {
    int a, b;
    printf("Digite os valores para a e b, respectivamente: \n");
    scanf("%d %d", &a, &b);
    inverter(&a, &b);
    printf("Valores invertidos:\n");
    printf("%d %d\n", a, b);
    return 0;
}
void inverter(int *p1, int *p2) {
    int troca = *p1;
    *p1 = *p2;
    *p2 = troca;
}
