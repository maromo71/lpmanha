#include <stdio.h>
void trocar(int *p_a, int *p_b);
int main(void) {
    int a = 5, b = 7;
    trocar(&a, &b);
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    return 0;
}

void trocar(int *p_a, int *p_b) {
    int aux = *p_a;
    *p_a = *p_b;
    *p_b = aux;
}