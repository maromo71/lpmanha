#include <stdio.h>
#include <string.h>
int main(void) {
    char nome1[51] = "Ana";
    char nome2[51] = "Beatriz";

    int resposta = strcmp(nome1, nome2);
    if (resposta == 0 ) {
        printf("Palavras sao iguais\n");
    }else if (resposta == -1) {
        printf("Ordem: %s, %s\n", nome1, nome2);
    }else {
        printf("Ordem: %s, %s\n", nome2, nome1);
    }
    return 0;
}
