#include <stdio.h>
#include <string.h>

void inverter(char * str_normal, char * str_invertida);

int main(void) {
    char frase[100];
    char nova[100] = {'\0'};
    printf("Digite uma frase: ");
    gets(frase);
    printf("%s\n", frase);
    inverter(frase, nova);
    printf("%s\n", nova);
    return 0;
}
void inverter(char * str_normal, char * str_invertida) {
    int tamanho = strlen(str_normal);
    char *p_normal = str_normal + tamanho - 1;

    // 1. Copiamos de trás para frente para a nova string
    while (p_normal >= str_normal) {
        *str_invertida = *p_normal; // Copia o caractere atual
        str_invertida++;            // Avança na nova string
        p_normal--;                 // Volta uma casa na string original
    }
    // 2. IMPORTANTE: Adiciona o caractere nulo para fechar a nova string
    *str_invertida = '\0';
}
