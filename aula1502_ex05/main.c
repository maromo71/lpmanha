#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    int a, b;
    fflush(stdin);
    printf("Entre com o valor de a: \n");
    scanf("%d", &a);
    fflush(stdin);
    printf("Digite uma letra \n");
    scanf("%c", &x);
    fflush(stdin);
    printf("Entre com o valor de b: \n");
    scanf("%d", &b);
    printf("Letra digitada: %c \n", x);
    printf("Valores de a, e b: [%d]  [%d] \n", a, b);
    return 0;
}
