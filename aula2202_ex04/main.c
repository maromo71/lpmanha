#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra = 66;
    letra = letra + 2;
    printf("Letra:  %c  \n", letra);
    printf("\n\n");
    printf("O codigo abaixo apresenta todos os caracteres possiveis: \n");

    int i;
    for( i = 0; i < 256; i++){
        printf("Valor [%d] equivale a letra [%c] \n", i, i);
    }
    printf("Pronto!!!");

    return 0;
}
