#include <stdio.h>

int main(void) {
    int n, cont=0;
    for (int i=1; i<=10; i++){
      printf("Digite um numero: ");
      scanf("%d", &n);
      if (n%2==0)cont++;
    }
    printf("Qtd de pares = %d\n", cont);
    return 0;
}