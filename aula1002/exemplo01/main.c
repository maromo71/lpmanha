#include <stdio.h>
#include "somar.h"

int main(void) {
    //Imprimir na tela a palavra Hello World
    printf("Hello, World!\n");

    int a = 10;
    int b = 30;

    int x = somar(a,b);
    printf("Valor da soma: %d\n", x);
    return 0;
}
