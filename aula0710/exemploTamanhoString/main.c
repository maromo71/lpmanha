#include <stdio.h>
int tamanhoString(char s[]);
int main(void) {
    char s[100];
    fflush(stdin);
    printf("Digite a string: ");
    gets(s);
    printf("Tamanho da palavra: %d\n", tamanhoString(s));
    return 0;
}

int tamanhoString(char s[]) {
    if(s[0]=='\0') return 0;
    return 1 + tamanhoString(s + 1);
}
