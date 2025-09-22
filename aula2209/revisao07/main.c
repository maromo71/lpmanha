#include <stdio.h>

int main(void) {
    char resposta;
    printf("Sexo: \n");
    printf("f: feminino\n");
    printf("m: masculino\n");
    printf("o: prefiro nao dizer\n");
    printf("Digite a opcao: \n");
    resposta = getchar();
    switch (resposta) {
        case 'f':
        case 'F':
            printf("Sexo Feminino \n");
            break;
        case 'm':
        case 'M':
            printf("Sexo Masculino \n");
            break;
        case 'o':
        case 'O':
            printf("Prefiro nao dizer\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    return 0;
}
