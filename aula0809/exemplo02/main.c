#include <stdio.h>

int main(void) {
    int v[10] = {0};
    int y[] = {3, 5, 9};
    for (int i = 0; i < 10; i++) {
        printf("Valor na pos %d: %d \n",i, v[i]);
    }
    for (int i = 0; i < 3; i++) {
        printf("Valor na pos %d: %d \n",i, y[i]);
    }
    return 0;
}