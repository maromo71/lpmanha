#include <stdio.h>
void imprimir_sem_espacos(char * p_frase);
int contar_letras(char * p_frase);
int main(void)
{
    char frase[100] = "fui na feira hoje";
    imprimir_sem_espacos(frase);
    int tamanho = contar_letras(frase);
    printf("Tamanho da frase: %d \n", tamanho);
    return 0;
}
void imprimir_sem_espacos(char * p_frase)
{
    while (*p_frase != '\0') {
        if (*p_frase != ' ') {
            putchar(*p_frase);
        }
        p_frase++;
    }
}

int contar_letras(char * p_frase)
{
    int * p_inicial = p_frase;
    while (*p_frase != '\0') {
        p_frase++;
    }
    int cont = (int) p_frase - (int) p_inicial;
    return cont;
}