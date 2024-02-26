#include <stdio.h>

int main() {
    char letra;
    printf("Digite uma letra minuscula: \n");
    letra = getchar();
    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("É vogal \n");
            break;
        default:
            printf("Não é vogal \n");
    }
    return 0;
}
