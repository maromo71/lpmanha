#include <stdio.h>

int main(void) {
    //supondo que a=2, b=3, c=4;
    int a, b, c, resultado;
    a = 2;
    b = 3;
    c = 4;
    resultado = ++a + b++ + ++c;
    //resultado = 3 + 3 + 5
    printf("Resultado: %d\n", resultado);
    return 0;
}
