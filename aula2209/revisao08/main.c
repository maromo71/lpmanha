#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a, b;
    printf("Digite dois numeros inteiros positivos \n");
    scanf("%d %d", &a, &b);

    int resultado = b!=0 ? a / b : -1;
    if (resultado!=-1) {
        printf("Resultado = %d\n", resultado);
    }else {
        printf("Nao pode dividir por ZERO \n");
    }

    return 0;
}