#include <stdio.h>
void up(int n);
int main(void) {
    int x;
    x = 5;
    up(x);
    return 0;
}

void up(int n) {
    if (n==0) return;
    up(n - 1);
    printf("%d\n", n); //desimpilhando

}
