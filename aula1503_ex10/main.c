#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[51];
    printf("Digite o nome da pessoa: \n");
    //gets(nome);
    fgets(nome, 51, stdin);
    printf("O nome da pessoa digitada: %s \n", nome);
    for(int i=0; i<51; i++){
        if(nome[i]=='\0') break;
        printf("%c \n", nome[i]);
    }
    //ou (mais simples usando o strlen
    for(int i=0; i<strlen(nome); i++){
        printf("%c \n", nome[i]);
    }

    return 0;
}
