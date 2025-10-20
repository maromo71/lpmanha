#include <stdio.h>
int indiceEncontrar(char *s, char letra);
int contarLetras(char *s, char letra);
int main(void) {
    char *palavra = "MENINO MALUQUINHO";
    char letra = 'X';
    int posicao = indiceEncontrar(palavra, letra);
    if (posicao==-1) {
        printf("Letra nao encontrada\n");
    }else {
        printf("Primeira ocorrencia: %d\n", posicao+1);
    }
    int total = contarLetras(palavra, letra);
    printf("Total de letras: %d\n", total);
    return 0;
}

int indiceEncontrar(char *s, char letra) {
    char * p_inicial = s;
    while (*s != '\0') {
        if (*s == letra) {
            return s - p_inicial;
        }
        s++; //desloca o ponteiro uma posicao
    }
    return -1;
}
int contarLetras(char *s, char letra) {
    int total = 0;
    while (*s != '\0') {
        if (*s == letra) {
            total++;
        }
        s++;//desloca para o proximo endereco
    }
    return total;
}