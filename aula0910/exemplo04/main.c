#include <ctype.h>
#include <stdio.h>

int main(void) {
    int valor;
    printf("Digite o valor da queda: \n");
    scanf("%d", &valor);
    char c;

    while ((c = getchar()) != '\n' && c != EOF)
    char nome[51];
    printf("Digite o nome da pessoa: \n");
    gets(nome);
    char outro[51];
    printf("Digite outro nome: \n");
    gets(outro);

    printf("Nome eh: %s\n", nome);
    printf("Outro Nome eh: %s\n", outro);
    printf("Valor da queda: %d\n", valor);
    return 0;
}
