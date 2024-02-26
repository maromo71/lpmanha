#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor de 1 a 7 \n");
    scanf("%d", &valor);
    switch (valor) {
        case 1:
            printf("Domingo \n");
            break;
        case 2:
            printf("Segunda-feira \n");
            break;
        case 3:
            printf("Terça-feira \n");
            break;
        case 4:
            printf("Quarta-feira \n");
            break;
        case 5:
            printf("Quinta-feira \n");
            break;
        case 6:
            printf("Sexta-feira \n");
            break;
        case 7:
            printf("Sábado \n" );
            break;
        default:
            printf("Opção inválida\n");
    }
    return 0;
}
