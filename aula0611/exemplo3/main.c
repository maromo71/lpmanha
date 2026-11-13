#include <stdio.h>

int contar_caracteres(char *p_string, char letra);
int main(void) {
    char frase[100] = "Comeu pao";
    printf("%s\n", frase);
    char letra_procurada;

    printf("Digite uma letra: ");
    letra_procurada = getchar();
    int resultado = contar_caracteres(frase, letra_procurada);
    printf("Total de letras encontradas: %d\n", resultado);
    return 0;
}
int contar_caracteres(char *p_string, char letra) {
    int contador = 0;
    while (*p_string != '\0') {
        if (*p_string == letra) contador++;
        p_string++;
    }
    return contador;
}
