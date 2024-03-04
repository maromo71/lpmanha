#include <stdio.h>

int main() {
    int termo = 1;
    int razao;
    printf("Entre com o valor da razao: \n");
    scanf("%d", &razao);
    for (int i = 0; i < 10; i++) {
        printf("%d ", termo);
        termo += razao;
    }
    printf("\n");
    return 0;
}
