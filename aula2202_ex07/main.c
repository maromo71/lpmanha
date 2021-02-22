#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;
    fflush(stdin);
    printf("Digite um caracter: \n");
    scanf("%c", &a);
    fflush(stdin);
    printf("Digite um caracter: \n");
    scanf("%c", &b);
    printf("Caracteres digitados:  %c %c \n", a, b);
    return 0;
}
