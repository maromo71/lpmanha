#include <stdio.h>

int main(void) {
    char letra1, letra2;
    printf("Digite uma letra: ");
    scanf("%c", &letra1);
    fflush(stdin);
    printf("Digite outra letra: ");
    scanf("%c", &letra2);

    printf("Letras: %c e %c \n", letra1, letra2);
    return 0;
}