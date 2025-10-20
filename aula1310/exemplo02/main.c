#include <stdio.h>
int fatorial(int n);
int main(void) {
    int x = 6;
    int resultado = fatorial(x);
    printf("Fatorial de %d = %d \n", x, resultado);
    return 0;
}
//Fatorial recursivo (simples para escrever)
//mas, consome muita memória.
int fatorial(int n) {
    if (n==1) return 1;
    return n * fatorial(n-1);
}