#include <stdio.h>

int contarLetras(char * p_frase);
int main() {
    char frase[51] = "Hoje acordei contente";

    printf("Total de letras: %d\n", contarLetras(frase));
    return 0;
}

int contarLetras(char * p_frase){
    char *p_inicio = p_frase;
    while(*p_frase != '\0'){
        p_frase++;
    }
    int tamanho = p_frase - p_inicio;
    return tamanho;
}
