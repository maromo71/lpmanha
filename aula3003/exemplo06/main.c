#include <stdio.h>

int main(void) {
    char frase[50];
    char vogais[50];
    printf("Digite uma frase:  \n");
    gets(frase);
    //1. percorrer toda a frase caracter a caracter
    //   ao encontrar um vogal copiar para o outro vetor
    int pos = 0;
    for (int i = 0; i < strlen(frase); i++) {
        switch (frase[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                vogais[pos++] = frase[i];
                break;
        }
    }
    vogais[pos] = '\0';
    printf("Frase: %s\n", frase);
    printf("Vogais extraidas: %s\n", vogais);
    return 0;
}
