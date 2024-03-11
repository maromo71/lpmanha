#include <stdio.h>
#include <string.h>

int main() {
    char palavra[31];
    printf("Digite uma palavra: \n");
    fgets(palavra, 31, stdin); //pega tudo até o enter
    palavra[strlen(palavra)-1] = '\0'; //coloca o \0 na posicao do enter
    printf("A palavra digitada foi: %s \n", palavra);
    char outra[31];
    fflush(stdin);
    printf("Digite outra palavra: \n");
    fgets(outra, 31, stdin);
    outra[strlen(outra)-1] = '\0';
    printf("A outra palavra foi: %s \n", outra);
    return 0;
}
