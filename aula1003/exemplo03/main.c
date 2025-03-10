#include <stdio.h>

int main(void) {
    long int  i = 1;
    printf("Comecou\n");
    //para gerar tempo
    for (i = 1; i<=900000000; i++);
    printf("Terminou\n");
    return 0;
}