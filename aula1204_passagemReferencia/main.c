#include <stdio.h>
#include <stdlib.h>
void trocar(int *a, int *b);
int main()
{

    int x = 10, y = 15;
    printf("[Main] Valor x: %d e Valor de y: %d \n", x, y);
    trocar(&x, &y);
    printf("[Main] Valor x: %d e Valor de y: %d \n", x, y);
    return 0;
}

void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
    printf("[Trocar] Valor a: %d e Valor de b: %d \n", *a, *b);
}
