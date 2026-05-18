#include <stdio.h>
void imprimir_invertido(char *p_frase);
int main(void) {
    char frase[256];
    printf("Insira uma frase: \n");
    gets(frase);
    imprimir_invertido(frase);
    return 0;
}
void imprimir_invertido(char *p_frase) {
    char *p_inicio = p_frase;
    while (*p_frase != '\0') p_frase++;
    //recua um
    p_frase--;
    while (p_frase >= p_inicio) {
        putchar(*p_frase);
        p_frase--;
    }
}
