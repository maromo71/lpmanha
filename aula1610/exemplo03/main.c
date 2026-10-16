#include <stdio.h>
void trocar(int * p_a, int * p_b);

int main(void) {
    int a = 10;
    int b = 20;
    trocar(&a, &b);
    printf("Valor de a: %d e b: %d\n", a, b);
    return 0;
}
//passagem por referencia (usa ponteiros - apotam para enderecos de memoria)
void trocar(int * p_a, int * p_b) {
    int aux = *p_a;
    *p_a = *p_b;
    *p_b = aux;
}
