#include <stdio.h>
void modificar(char *p_str, char old, char new);
int main(void) {
    char frase[256];
    printf("Digite uma frase: ");
    gets(frase);
    fflush(stdin);
    char letra1, letra2;
    printf("Digite a letra a ser trocada: \n");
    scanf("%c", &letra1);
    fflush(stdin);
    printf("Digite a nova letra: \n");
    scanf("%c", &letra2);
    fflush(stdin);
    modificar(frase, letra1, letra2);
    printf("Frase: %s\n", frase);
    return 0;
}

void modificar(char *p_str, char old, char new) {
    while (*p_str != '\0') {
        if (*p_str == old) *p_str = new;
        p_str++;
    }
}
