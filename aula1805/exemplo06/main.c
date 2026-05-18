#include <stdio.h>
int strlen(char *p_str);
int main(void) {
    char frase[1000];
    printf("Digite um textao:  \n");
    gets(frase);
    printf("Tamanho: %d \n", strlen(frase));
    return 0;
}
int strlen(char *p_str) {
    char * p_ini = p_str;
    while (*p_str != '\0') {
        p_str++;
    }
    return (int) (p_str - p_ini);
}
