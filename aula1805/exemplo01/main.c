#include <stdio.h>

int main(void) {
    int x = 5;
    int y = 21;
    float pi = 3.14f;
    int * ptr_x = &x;
    float * pointer_to_pi = &pi;
    printf("Valor de x: %d\n", x);
    printf("Valor de x: %d\n", *ptr_x);
    return 0;
}
