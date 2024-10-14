#include <stdio.h>

void trocar(int *pa, int *pb);

int main(void) {
    int x = 10, y = 15;
    trocar(&x, &y);
    printf("Valores trocados: \n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0;
}
void trocar(int *pa, int *pb) {
    int aux = *pa;
    *pa = *pb;
    *pb = aux;
}
