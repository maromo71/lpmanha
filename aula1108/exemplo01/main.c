#include <stdio.h>

int main(void)
{
    printf("Texto \"destacado\" \n");
    printf("O \\n pula uma linha\n");
    printf("Desconto de 5%% \n");
    char letra = 'A';
    char outra = 97;
    printf("%c \n", letra);
    printf("%c \n", outra);
    for (int i=0; i<=255; i++) {
        printf("%d = %c \n",i,  i);
    }
    return 0;
}