#include <stdio.h>
#include <ctype.h>

void contarFrequencia(char s[], int freq[26]);
int main() {
    char texto[100];
    int alfabeto[26];

    printf("Digite o texto: ");
    gets(texto);

    contarFrequencia(texto, alfabeto);

    for (int i = 0; i < 26; i++) {
        if (alfabeto[i] > 0) {
            printf("%c: %d\n", i + 'a', alfabeto[i]);
        }
    }
    return 0;
}

void contarFrequencia(char s[], int freq[26]) {
    for (int i = 0; i < 26; i++) freq[i] = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char carac = tolower(s[i]);
        if (carac >= 'a' && carac <= 'z') {
            freq[carac - 'a']++; //Ponto magico da logica
        }
    }
}
//Quando fazemos carac - 'a', o C subtrai os valores
//numéricos dessas letras. Imagine que a variável
//carac guarde a letra 'c':
//'c' - 'a' ==> 99 - 97 = 2
//freq[2]++; Posicao da letra c soma mais um para a quantidade.