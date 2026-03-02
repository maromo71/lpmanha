#include <stdio.h>

int main(void) {
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    if (idade < 18) {
        printf("Desconto de 5%% na compra\n");
    } else if (idade <= 60) {
        printf("Desconto de 10%% na compra\n");
    } else {
        printf("Desconto de 15%% na compra\n");
    }
    return 0;
}