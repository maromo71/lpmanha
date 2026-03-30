#include <stdio.h>
//1 vetor de caracteres para guardar o nome de alguem
int main(void) {
    char nome[61];
    printf("Digite seu nome completo: \n");
    gets(nome); //ler um string
    printf("Seu nome eh: %s\n", nome);
    //1 imprimindo caracter a caracter do nome
    for (int i=0; i<61; i++) {
        if (nome[i]=='\0') break; //sai do for
        printf("%c\n", nome[i]);
    }
    return 0;
}
