#include <stdio.h>

int main(void) {
    char letra = '\0';
    while (1) { // enquanto verdade = loop infinito
        fflush(stdin); //limpar buffer
        printf("Digite uma letra: (ou 'x' para sair)");
        letra = getchar(); //le um caractere
        if (letra == 'x') break; // forcar a saida
    }
    return 0;
}