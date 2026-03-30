#include <stdio.h>
#include <string.h>
int main(void) {
    char frase[50];
    char vogais[50];
    char lista[] = "aeiouAEIOU";
    printf("Digite uma frase:  \n");
    gets(frase);
    //1. percorrer toda a frase caracter a caracter
    //   ao encontrar um vogal copiar para o outro vetor
    int pos = 0;
    for (int i = 0; i < strlen(frase); i++) {
       for (int j=0; j<strlen(lista); j++) {
           if (frase[i]==lista[j]) {
               vogais[pos++] = frase[i];
               break;
           }
       }
    }
    vogais[pos] = '\0';
    printf("Frase: %s\n", frase);
    printf("Vogais extraidas: %s\n", vogais);
    return 0;
}
