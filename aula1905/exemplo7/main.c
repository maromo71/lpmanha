#include <stdio.h>
void imprimir(char * p_palavra);
int main(void)
{
    imprimir("Hello World!");
    return 0;
}
void imprimir(char * p_palavra)
{
    char *p_inicio = p_palavra;
    while ( *p_palavra != '\0' ) {
        putchar(*p_palavra++); //deslocar uma casa a direita
    }
    p_palavra--; // sai do \0
    putchar('\n');
    while (p_palavra >= p_inicio) {
        putchar(*p_palavra--); //deslocar uma casa a esquerda
    }
}