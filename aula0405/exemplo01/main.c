#include <stdio.h>

int main(void) {
   // int valor;
    char palavras[101];
    //printf("Digite um valor: \n");
    //scanf("%d", &valor);
    fflush(stdin);
    printf("Digite uma palavra: \n");
    fgets(palavras, 101, stdin);
    puts(palavras);
    printf("\n");
    printf("Caractere a caractere\n");
    for (int i=0; i<101; i++) {
        if (palavras[i]=='\0') break;
        printf("%c\n", palavras[i]);
    }

    return 0;
}
