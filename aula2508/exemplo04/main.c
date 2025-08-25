#include <stdio.h>

int main(void)
{
    char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    switch (letra) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("Ehhhhh vogalllll \n");
            break;
        default:
            printf("Nao ehhhh vogal \n");
    }
    return 0;
}