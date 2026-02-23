#include <stdio.h>

int main(void) {
    int x, y, resultado;
    printf("Digite um valor: \n");
    scanf("%d", &x);
    printf("Digite outro valor: \n");
    scanf("%d", &y);
    resultado = x + y;
    printf("Resultado: %d \n", resultado);
    printf("Tamanho em bytes da var resultado %d\n", sizeof(resultado));
    return 0;
}