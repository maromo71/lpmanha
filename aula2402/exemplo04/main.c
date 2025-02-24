#include <stdio.h>

int main(void) {
    char letra;
    fflush(stdin);
    printf("Digite um letra: \n");
    letra = getchar();
    //é vogal ou não vogal
    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("É vogal \n");
            break;
        default:
            printf("não é vogal\n");
    }
    return 0;
}