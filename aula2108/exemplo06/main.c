#include <stdio.h>

int main(void) {
    char letra1, letra2;
    printf("Digite a letra 1: ");
    scanf("%c", &letra1);
    //universal - declaro uma variavel com char (s)
    char c;
    //enquanto tiver lixo no teclado, atribui a var c
    //quando encontrar o fim da linha (\n ou _ )
    //universal
    while ((c = getchar()) != '\n' && c != EOF);
    //comando fflush
    //onde funciona limpa o buffer
    //comando: fflush(stdin)
    printf("Digite a letra 2: ");
    //scanf("%c", &letra2);
    letra2 = getchar();
    printf("\nLetra 1: %c  e   Letra 2: %c\n", letra1, letra2);
    return 0;
}
