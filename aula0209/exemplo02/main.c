#include <stdio.h>

void trocar(int *a, int *b);

int main(void) {
    int a = 10;
    int b = 20;
    trocar(&a, &b);
    printf("Valor de a: %d \n ", a);
    printf("Valor de b: %d \n ", b);
    return 0;
}

void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}