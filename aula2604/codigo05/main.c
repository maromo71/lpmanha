#include <stdio.h>
#include <stdlib.h>

int tamanho_da_string(char * palavra);

int main()
{
    char p[100];
    printf("Digite um frase: ");
    scanf("%[^\n]", p);
    printf("Tamanho: %d \n", tamanho_da_string(p));
    return 0;
}

int tamanho_da_string(char * palavra){
    char * ptr = palavra;
    int tamanho = 0;
    while(* ptr != '\0'){
        ptr++;
    }
    tamanho = ptr - palavra;
    return tamanho;
}
