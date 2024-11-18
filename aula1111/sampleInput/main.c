#include <stdio.h>
#include <string.h>
//Teste:
// oi - Entrada inválida
// 100 - Valor lido 100
// 100mma - Valor lido 100
int main(void) {
    char buffer[101];
    int valor;
    while(1) {
        printf("Digite um valor: \n");
        fgets(buffer, 101, stdin);
        //retirando o final "enter \n"
        buffer[strlen(buffer) - 1] = '\0';
        if(sscanf(buffer, "%d", &valor) == 2) {
            break;
        }else {
            printf("\nEntrada inválida\n");
        }
    }
    printf("Valor lido: %d \n", valor);
    return 0;
}
