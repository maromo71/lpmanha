#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[21];
    char sobrenome[21];
    char nomeCompleto[41];
    printf("Digite seu nome: \n");
    gets(nome);
    fflush(stdin); //limpar buffer do teclado
    printf("Digite seu sobrenome:  \n");
    gets(sobrenome);
    //algoritmo para juntar os nomes
    fflush(stdin);
    int p = 0;
    while (nome[p] != '\0') {
        nomeCompleto[p] = nome[p++];
    }
    nomeCompleto[p] = ' ';
    p++;
    int q = 0;
    while (sobrenome[q]!='\0') {
        nomeCompleto[p++] = sobrenome[q++];
        p++;
        q++;
    }
    nomeCompleto[p] = '\0';
    printf("Nome completo: %s \n", nomeCompleto);
    return 0;
}
