#include <stdio.h>
#include <string.h>
int main(void) {
    char frase[256];
    printf("Digite uma frase: ");
    gets(frase);
    int tamanho = strlen(frase); // tamanho da cadeia de caracteres

    char copia[256];
    //strcpy(copia, frase); //copiar um string
    printf("Tamanho da frase: %d \n", tamanho);
    printf("Frase: %s\n", frase);


    strncpy(copia, frase, 3);
    printf("Copia: %s\n", copia);
    return 0;
}
