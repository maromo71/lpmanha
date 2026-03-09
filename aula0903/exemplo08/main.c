#include <stdio.h>

int main(void) {
    int num;
    printf("Digite um numero: [1..9] \n");
    scanf("%d", &num);
    for (int i=1; i<=num; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
