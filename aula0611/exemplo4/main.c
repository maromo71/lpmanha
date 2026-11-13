#include <stdio.h>

int tamanho(char *p_string);
void inverse_print(char *p_string);

int main(void) {
    char frase[200];
    printf("Digite uma frase: \n");
    gets(frase);
    printf("Tamanho: %d \n", tamanho(frase));
    inverse_print(frase);
    return 0;
}

int tamanho(char *p_string) {
    char *p_inicial = p_string;
    while (*p_string != '\0') {
        p_string++;
    }
    return p_string - p_inicial;
}

void inverse_print(char *p_string) {
    char *p_inicial = p_string;
    while (*p_string != '\0') p_string++;
    p_string--; //ultima letra
    while (p_string >= p_inicial) {
        putchar(*p_string); //conteudo (a letra)
        p_string--; //desloca para cassa anterior
    }
    p_string = p_inicial;
}
