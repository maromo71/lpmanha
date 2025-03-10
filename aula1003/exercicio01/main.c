#include <stdio.h>

int main(void) {
    int pa = 1;
    int razao = 0;
    printf("Digite a razao para a progressao aritmetica \n");
    scanf("%d", &razao);
    for (int i = 1; i < 10; i++) {
        printf("%d\n", pa);
        pa += razao;
    }
    return 0;
}