#include <stdio.h>
#include <string.h>

void gerar_versao_seguranca(char *frase);

void inverter_palavra(char *p_ini, char *p_fim);

int main() {
    char buffer[100];
    printf("Digite a frase: ");
    // Usei fgets para proteger o buffer, capturando o stdin
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strlen(buffer) - 1] = '\0'; //Eliminando o enter da ultima casa
    gerar_versao_seguranca(buffer);
    printf("%s", buffer);
    return 0;
}

void gerar_versao_seguranca(char *frase) {
    // Implemente a lógica de inversão e substituição respeitando o '\0'
    int i = 0, inicio = 0;
    int tamanho = strlen(frase);

    // Inverter palavras e substituir espaços "_"
    for (i = 0; i <= tamanho; i++) {
        // Se encontrar fim de palavra ou fim de string
        if (frase[i] == ' ' || frase[i] == '\0') {
            inverter_palavra(&frase[inicio], &frase[i - 1]);

            // Trocar o espaço pelo caracteres -> '_'
            if (frase[i] == ' ') {
                frase[i] = '_';
            }
            inicio = i + 1;
        }
    }
}


void inverter_palavra(char *p_ini, char *p_fim) {
    char troca;
    while (p_ini < p_fim) {
        troca = *p_ini;
        *p_ini = *p_fim;
        *p_fim = troca;
        p_ini++;
        p_fim--;
    }
}
