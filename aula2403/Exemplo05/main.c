#include <stdio.h>
#include <string.h> //biblioteca com diversas funcoes que manipulam string

int main(void) {
    char frase[101];
    printf("Digite uma frase: \n");
    gets(frase);
    printf("A frase digitada eh: %s \n", frase);
    //como saber o tamanho da frase - usamos a funcao (strlen)
    int tamanho = strlen(frase);
    printf("Quantidade de caracteres da frase: %d \n", tamanho);
    return 0;
}