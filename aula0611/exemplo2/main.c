#include <stdio.h>

int main(void) {
    //Explicacao na lousa
    int a = 100;
    int b = 200;
    int c = 500;
    int * p_a =  &a;
    printf("Valor de a: %d \n", a);
    printf("Valor de a: %d \n", p_a);
    int * p_b = &b;
    *p_b += 500;
    printf("Valor de b: %d \n", b);
    int * p_c = p_b;
    *p_c = 131;
    printf("Valores: %d %d %d %d %d\n", a, b, c, *p_b, *p_c);
    return 0;
}
