#include <stdio.h>

int main(void) {
    //vetor de 10 valores inteiros
    int nums[10] = {0};
    //percorrer
    for (int i = 0; i < 10; ++i) {
        printf("pos[%d] = %d\n", i, nums[i]);
    }
    return 0;
}
