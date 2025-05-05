#include <stdio.h>
int fat(int n) {
    if (n == 1) return 1;
    int fatorial = n * fat(n - 1);
    return fatorial;
}
int main(void) {
    printf("Fatorial de 6 = %d\n", fat(6));
    return 0;
}