#include <stdio.h>

int main(void)
{
    char letra1;
    char letra2;
    printf("Digite uma letra: \n");
    letra1 = getchar(); //ler um caractere
    getchar(); //tem a funcao de limpar um caractere
    printf("Digite uma letra: \n");
    letra2 = getchar();

    printf("Letra digitada: %c\n", letra1);
    printf("Letra digitada: %c\n", letra2);
    return 0;
}