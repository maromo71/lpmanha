#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    fflush(stdin);
    printf("Digite uma letra: \n");
    //scanf("%c", &letra);
    letra = getchar();

    printf("Letra: %c \n",  letra);
    return 0;
}
