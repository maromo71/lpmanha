#include <stdio.h>
/*
Enunciado: Crie um programa que solicite ao usuário o
número de rodas de um veículo e, usando a estrutura switch,
determine se é uma bicicleta (2 rodas), carro
(4 rodas), ou "Outro tipo" para qualquer outro
número de rodas.
*/
int main(void) {
    int num_rodas;
    printf("Digite o numero de roadas do veiculo: \n");
    scanf("%d", &num_rodas);
    switch (num_rodas) {
        case 2:
            printf("Bicicleta\n");
            break;
        case 4:
            printf("Carro 4 rodas\n");
            break;
        default:
            printf("Outro tipo \n");
    }
    return 0;
}
