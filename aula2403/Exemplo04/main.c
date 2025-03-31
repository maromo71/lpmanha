#include <stdio.h>

int main(void) {
    char palavra[51];
    printf("Digite uma palavra: \n");
    gets(palavra);
    printf("A palavra digitada foi: %s\n", palavra);

    //verificar se e um palindromo.
    int tamanho = 0;
    for (int i = 0; i < 51; i++) {
        if (palavra[i] == '\0') {
            tamanho = i;
            break;
        }
    }
    printf("Tamanho da palavra: %d \n", tamanho);
    tamanho--;
    int palindromo = 1;
    for (int i = 0; i <= tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho]) {
            palindromo = 0;
            break;
        }
        tamanho--;
    }
    if (palindromo) {
        printf("A palavra e um palindromo\n");
    } else {
        printf("A palavra nao e um palindromo\n");
    }
    return 0;
}
