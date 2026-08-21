#include <stdio.h>

int main(void) {
    char nome[51];
    printf("Digite o nome da pessoa: ");
    scanf("%[^\n]", nome);

    char c;
    while((c = getchar()) != '\n' && c != EOF);

    char nome2[51];
    printf("Digite outro nome completo: ");
    scanf("%[^\n]", nome2);

    printf("O nome e: %s", nome);
    printf("\nO outro nome eh: %s", nome2);
    return 0;
}
