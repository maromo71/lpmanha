#include <stdio.h>
int potencia(int x, int y);
int main(void) {
    int a = 2;
    int b = 10; //saber 5 elevado a 3a potencia
    int result = potencia(a, b);
    printf("O resultado de %d elevado a %d = %d\n", a, b, result);
    return 0;
}
int potencia(int x, int y) {
    if(y == 1) return x;
    return x * potencia(x, y-1);
}
