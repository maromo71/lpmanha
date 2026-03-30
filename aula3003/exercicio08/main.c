#include <stdio.h>
#include <string.h>

int ehPalindromo(char s[], int ini, int fim);
int main(void) {
    char palavra[100];
    printf("Digite uma palavra: ");
    gets(palavra);
    int fim = strlen(palavra)-1;
    if (fim <=0) {
        printf("Digite uma palavra com mais do que um caractere.");
        return 1;
    }
    if (ehPalindromo(palavra, 0, fim)) {
        printf("Eh palindromo \n");
    }else {
        printf("Nao eh palindromo \n");
    }
    return 0;
}


int ehPalindromo(char s[], int ini, int fim) {
    if (ini >= fim) return 1;
    if (s[ini] != s[fim]) return 0;
    return ehPalindromo(s, ini + 1, fim -1);
}
