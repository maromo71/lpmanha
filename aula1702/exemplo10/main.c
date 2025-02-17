#include <stdio.h>

int main(void) {
    unsigned char letra ='\0';
    printf("Digite um letra: \n");
    letra =  getchar();
    printf("Letra: %c \n", letra);
    return 0;
}