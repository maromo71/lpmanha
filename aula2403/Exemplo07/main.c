#include <stdio.h>
#include <string.h>
int main(void) {
    char nome[51] = "oscar silva junior pereira gomes";
    char ult[16] = {0};
    char pri[16] = {0};
    int tam = 0;
    while (nome[tam]!= ' ') tam++;
    strncpy(pri, nome, tam);
    pri[tam] = '\0';
    printf("Primeiro nome: %s \n", pri);
    tam = strlen(nome);
    while (nome[tam-1] != ' ') tam--;
    printf("Posicao do ultimo espaco: %d\n", tam);
    int letras = strlen(nome) - tam;
    printf("Letras: %d \n", letras);
    for (int i=0; i<letras;i++){
      ult[i] = nome[tam++];
    }
    ult[letras+1]='\0';
    printf("Ultimo nome: %s \n", ult);
    return 0;
}