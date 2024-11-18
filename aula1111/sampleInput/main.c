#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[101];
    while(1) {
        printf("Digite um valor: \n");
        fgets(buffer, 101, stdin);

        //retirando o final "enter \n"
        buffer[strlen(buffer) - 1] = '\0';
        printf("%s", buffer);

        int valor;
        //conversao segura
        if(sscanf(buffer, "%d", &valor) == 1) {
            break;
        }else {
            printf("\nEntrada inválida\n");
        }
    }

    return 0;
}
