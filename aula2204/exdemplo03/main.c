#include <stdio.h>
void imprimirReverso(char *ptr);
int main() {
    char frase[100] = "Hoje esta um bom dia";
    imprimirReverso(frase);
    return 0;
}

void imprimirReverso(char *ptr){
    char * p_i = ptr;
    while(*ptr!='\0') ptr++;
    ptr--;
    while(ptr>=p_i) putchar(*ptr--);
}
