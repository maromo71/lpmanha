#include <stdio.h>

int main() {
    char nome[51];
    char email[61];
    fflush(stdin);
    printf("Digite o nome da pessoa: \n");
    scanf("%[^\n]", nome);
    // fgets(nome, 51, stdin); alternativa (\n)
    fflush(stdin);
    printf("Digite o email da pessoa: \n");
    scanf("%s", email);

    printf("Nome: %s \n", nome);
    printf("Email: %s \n", email);

    return 0;
}
