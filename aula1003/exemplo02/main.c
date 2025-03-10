#include <stdio.h>

int main(void) {
    int x = 1;
    //loop infinito (tem que ter saida - break)
    for (;;) {
        printf("%d\n", x++);
        if (x % 10 == 0) break;
    }
    return 0;
}