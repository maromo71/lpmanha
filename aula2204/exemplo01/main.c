#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int *p_x = &x;
    int *p_y = &y;
    printf("Valor de x = %d e y = %d \n", x, y);
    printf("Valor de x = %d e y = %d \n", *p_x, *p_y);

    return 0;
}
