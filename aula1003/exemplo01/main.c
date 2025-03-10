#include <stdio.h>

int main(void) {
    int x = 1;
    int y = 2;
    //uso atíptico do for. (não é uma boa prática)
    for (x = 30; y < 40; y+= x+2) {
        printf("%d\n", y);
    }
    return 0;
}