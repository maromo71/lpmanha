#include <stdio.h>

void cifrar(char *s);

int main(void) {
    char *palavra = "Senha do Marcia";
    cifrar(palavra);
    return 0;
}

void cifrar(char *s) {
    char palavra[strlen(s)];
    int p=0;
    while (*s != '\0') {
        palavra[p] = *s;
        switch (*s) {
            case 'a':
            case 'A':
                palavra[p] = '4';
                break;
            case 'e':
            case 'E':
                palavra[p] = '3';
                break;
            case 's':
            case 'S':
                palavra[p] = '5';
                break;
            case 't':
            case 'T':
                palavra[p] = '7';
        }
        s++;
        p++;
    }
    printf("%s\n", palavra);
}
