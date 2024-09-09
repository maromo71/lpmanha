#include <stdio.h>
#include <string.h>
int main(void) {
    char nome[51] = {'\0'};
    int idade;
    char genero;
    printf("Digite a letra do genero: \n");
    genero = getchar();
    fflush(stdin);
    printf("Digite nome completo: \n");
    // gets(nome); - Evitar o uso do gets
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome)-1] = '\0';
    printf("Seu nome completo: '%s' \n", nome);
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Sua idade: %d \n", idade);
    return 0;
}

