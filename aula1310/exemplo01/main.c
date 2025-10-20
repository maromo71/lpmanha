#include <stdio.h>
int fatorial(int n);
int main(void) {
    int x= 5;
    int resultado = fatorial(x);
    printf("Fatorial de %d = %d\n", x, resultado);
    return 0;
}
//Fatorial classico usando repeticao (for)
int fatorial(int n) {
    int fat = 1;
    for (int i = n; i >= 1; i--) {
        fat *= i;
    }
    return fat;
}