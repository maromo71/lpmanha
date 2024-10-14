#include <stdio.h>
int tamanhoPalavra(char *ps);
int contarCaractere(char *ps, char ch);
void imprimir(char *ps);
void trocarLetra(char *ps, char ch_old, char ch_new);
int main(void) {
    char palavra[100];
    fflush(stdin);
    printf("Digite uma palavra qualquer: \n");
    gets(palavra);
    fflush(stdin);
    printf("Caractere a encontrar: \n");
    char c = getchar();
    printf("Encontrei %d letras na palavra\n", contarCaractere(palavra, c));
    imprimir(palavra);
    trocarLetra(palavra, 'a', 'x');
    printf("\n");
    printf("%s\n", palavra);
    printf("Tamanho da palavra: %d \n", tamanhoPalavra(palavra));
    return 0;
}
int contarCaractere(char *ps, char ch) {
    int total = 0;
    while (*ps != '\0') { //caractere por caractere
        if(*ps == ch) total++; //verifico se o caractere da vez é igual ao procurado
        ps++; //desloca o ponteiro para a proxima posicao
    }
    return total;
}
void imprimir(char *ps) {
    char *pinicio = ps;
    while(*ps != '\0') {
        putchar(*ps++);
    }
    ps--;
    printf("\n");
    while(ps >= pinicio) {
        putchar(*ps--);
    }
    ps++;
}
void trocarLetra(char *ps, char ch_old, char ch_new) {
    while(*ps != '\0') { //enquanto nao terminar a palavra '\0'
        if(*ps == ch_old) *ps = ch_new; //troca caractere antigo pelo novo
        ps++; //desloca para o proximo caractere da palavra
    }
}
int tamanhoPalavra(char *ps) {
    char *pini = ps; // guardar o endereco inicial em pini
    while(*ps != '\0') ps++; //deslocar os ps ate o '\0' (fim)
    return ps - pini;
}