#include <stdio.h>
void linha(int n) {
    for (int i=0; i<n; i++) {
        putchar('*');
    }
    printf("\n");
}
int main(void) {
    linha(3);
    linha(5);
    linha(7);
    linha(5);
    linha(3);
    printf("Acabou\n");
    return 0;
}
