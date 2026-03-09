#include <stdio.h>

int main(void) {
    //Exemplo comum de for (repetir 100 vezes)
    for (int i = 1; i <= 100; i++) {
        printf("[%d] ", i);

    }
    //Tabuada do x que o usuario entrou
    int x;
    printf("\nDigite o numero da tabuada desejada: \n");
    scanf("%d", &x);
    printf("\n");
    for (int i = 1; i <= 10; i++) {
        int r = i * x;
        printf("%d X %d = %d \n", i, x, r);
    }
    return 0;
}