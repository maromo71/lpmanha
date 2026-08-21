#include <stdio.h>

int main(void) {
    int a, b;
    float resultado;
    a = 21;
    b = 5;
    //na linha de baixo fizemos um cast (promocao do tipo)
    resultado = (float)a / b;
    printf("%.2f e o resultado\n", resultado);
    //resto de a por b
    int resto =  a % b;
    printf("O resto de %d por %d e: %d\n",a,b,resto);
    return 0;
}
