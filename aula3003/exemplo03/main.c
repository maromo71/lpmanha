#include <stdio.h>
#include <string.h>
//Verificar se uma palavra eh um palindromo
//ou seja, sua escrita de tras para frente é
//igual a ela. ANA == ANA   RADAR == RADAR  == ANDA != ADNA
int main(void) {
    char palavra[21];
    printf("Digite uma palavra: ");
    gets(palavra);

    int palindromo = 1;
    int ult = strlen(palavra)-1; //retorna o tamanho da palavra
    for (int i = 0; i < strlen(palavra)/2; i++) {
        if (palavra[i] != palavra[ult]) {
            palindromo = 0;
            break;
        }
        ult--; //vai para o caracter anterior
    }
    if (palindromo == 1) {
        printf("Palindromo");
    }else {
        printf("Nao eh um Palindromo");
    }
    return 0;
}
