#include <stdio.h>

int main(void) {
    char genero;
    printf("Digite o genero m (masculino), f (feminino), o (outros)\n");
    scanf("%c", &genero);
    switch (genero) {
        case 'm':
        case 'M':
            printf("Gênero: masculino \n");
            break;
        case 'f':
        case 'F':
            printf("Gênero: feminino \n");
            break;
        case 'o':
        case 'O':
            printf("Gênero: não informado\n");
            break;
        default:
            printf("Não fornecido\n");
    }
    return 0;
}
