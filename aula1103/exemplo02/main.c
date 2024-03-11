#include <stdio.h>
#include <string.h>
int main() {
    char nome[51];
    char sobrenome[51];
    fflush(stdin);
    printf("Digite o primeiro nome: \n");
    fgets(nome, 51, stdin);
    nome[strlen(nome)-1] = '\0';

    fflush(stdin);
    printf("Digite o ultimo nome: \n");
    fgets(sobrenome, 51, stdin);
    sobrenome[strlen(sobrenome)-1] = '\0';

    char nomeCompleto[101];
    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);
    printf("Nome completo: %s\n", nomeCompleto);
    printf("Total de caracteres: %lu\n", strlen(nomeCompleto));
    return 0;
}
