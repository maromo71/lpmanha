#include <stdio.h>

void modifica_valor(int *p);

int main(void) {
    int * p_x = NULL;

    int valor = 1000;

    p_x = &valor;

    printf("Valor: %d \n", valor);

    modifica_valor(p_x);

    printf("Valor de p_x: %d\n", *p_x);

    printf("Novo valor: %d \n", valor);
    return 0;
}
void modifica_valor(int *p) {
    *p = *p + 100;
}
