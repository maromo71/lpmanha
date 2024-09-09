#include <stdio.h>
#include <string.h>
int main(void) {
    char palavra[21]={'\0'};
    printf("Digite uma palavra: \n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strlen(palavra)-1] = '\0';
    //vem a logica
    int ult = strlen(palavra) -1;
    for (int i = 0; i < strlen(palavra)/2; ++i) {
        //logica
        if(palavra[i] != palavra[ult]) {
            printf("Não é palíndromo\n");
            return 0;
        }
        ult--;
    }
    printf("É um palíndromo\n");
    return 0;
}
