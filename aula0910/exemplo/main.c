#include <stdio.h>
#define T 5

int main(void) {
    int matriz[T][T] = {{0}};
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("[%2d] ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
