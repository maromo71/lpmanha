#include <stdio.h>

int mostrarValor(int x);

int x = 10;
int main(void) {
    printf("%d\n", x);
    int x = 15;
    mostrarValor(x);
    printf("%d\n", x);
    return 0;
}

int mostrarValor(int x){
    x++;
    printf("%d\n", x);
}
