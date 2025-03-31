#include <stdio.h>
#include <string.h>
int main(void) {
    char texto[51];
    char outro[51];
    char palavra[4] = {0};
    printf("Digite o texto: \n");
    gets(texto);
    //copiar o texto para o outro
    strcpy(outro, texto);
    printf("Outro: %s \n", outro);
    strncpy(palavra, texto, 3);
    palavra[3] = '\0';
    printf("2 letras: %s \n", palavra);
    return 0;
}