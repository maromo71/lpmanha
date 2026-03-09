#include <stdio.h>

int main(void) {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade < 18) {
        printf("Recebe 5%% de desconto \n");
    } else if (idade < 60) {
        printf("Recebe 10%% de desconto \n");
    } else {
        printf("Recebe 15%% de desconto \n");
    }
    return 0;
}