#include <stdio.h>

int main(void) {
    int n, soma = 0;
    do{
      do{
        printf("Digite um valor entre 0 e 20: \n");
        scanf("%d", &n);
      }while (n < 0 || n > 20);
      soma+=n;
    }while (n!=0);
    printf("A soma dos valores digitados e: %d\n", soma);
    return 0;
}