#include <stdio.h>
#include <stdlib.h>

int main()
{
    //uma variavel normal do tipo inteiro
    short int a = 10;
    printf("Valor de a: %d \n", a);
    printf("Tamamho de espaco na memoria da variavel a: %d \n", sizeof(a));

    char letra = 66;

    printf("Voce definiu letra como %c \n", letra);
    double salario = 5550.0;

    return 0;
}
