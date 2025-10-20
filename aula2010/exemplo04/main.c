#include <stdio.h>
void percorrer(int * v, int t);
int main(void) {
    int x[10] = {2,4,6,8,10,12,14,16,18,20};

    percorrer(x, 10);
    return 0;
}

void percorrer(int * v, int t) {
    int *p_fim = v + 9;
    for (int i=t; i>=0; i--) {
        printf("%d ", *p_fim--);
    }
}