#include <stdio.h>

int main() {
    int soma = 0;
    int n;
    while(soma <= 500){
        printf("Digite um valor: \n");
        scanf("%d", &n);
        soma+= n;
    }
    printf("Valor da soma: %d \n", soma);
    return 0;
}
