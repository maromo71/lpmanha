#include <stdio.h>

int main() {
    //colocar 0 em todas posições
    int valor[10] = {0};
    for (int i = 0; i < 3; ++i) {
        printf("Pos %d Valor %d \n", i, valor[i]);
    }
    return 0;
}
