#include <stdio.h>

int fatorial(int n);

int main(void) {
    int num;
    printf("Digite um valor: \n");
    scanf("%d", &num);
    int resultado = fatorial(num);
    printf("Resultado: %d \n", resultado);
    return 0;
}

int fatorial(int n) {
    if (n==1) return 1;
    return n * fatorial(n-1);
}
