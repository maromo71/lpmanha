#include <stdio.h>

int main(void) {
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Eh vogal\n");
            break;
        default:
            printf("Nao Eh vogal\n");
    }
    return 0;
}
