#include <stdio.h>

int main(void) {
    char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    switch (letra) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("Eh vogal");
            break;
        default:
            printf("Nao eh vogal");
    }
    return 0;
}
