#include <stdio.h>

int main(void) {
    char nome[51];
    printf("Digite seu nome: ");
    gets(nome);
    printf("Seu nome e: %s\n", nome);
    return 0;
}