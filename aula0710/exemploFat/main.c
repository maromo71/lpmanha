#include <stdio.h>
int fat(int n);
int main(void)
{
    int valor;
    printf("Fatorial de qual valor: \n");
    scanf("%d", &valor);
    int resultado =  fat(valor);
    printf("O fatorial de %d ==> %d \n", valor, resultado);
    return 0;
}
int fat(int n) {
    if (n == 1)return 1;
    return n * fat(n - 1);
}
