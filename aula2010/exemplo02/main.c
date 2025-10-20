#include <stdio.h>
void printr(char *s);
int strlen(char *s);
int main(void) {
    printr("Socorram-me, subi no onibus em Marrocos");
    int tam = strlen("Socorram-me, subi no onibus em Marrocos");
    printf("\nTotal em caracteres: %d \n", tam);
    return 0;
}
void printr(char *s) {
    //Estratégia. Deslocar o ponteiro até o final
    //1. Marcar posicao inicial
    char * p_ini = s;
    //2. Deslocar ate o ultimo caractere
    while (*s != '\0') {
        s++;
    }
    //3. Voltar para o caractere anterior
    s--;
    //4. Laco para imprimir caracter por caracter
    //   até chegar no inicio
    while (s >= p_ini) {
        putchar(*s--);
    }
}

int strlen(char *s) {
    char *p_ini = s;
    while (*s != '\0') {
        s++;
    }
    return s - p_ini;
}