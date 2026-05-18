#include <stdio.h>
int encontrar_maior(int *p_v, int tam);
int main(void) {
    int jogo[6] = {37, 14, 21, 11, 60, 36};
    int maior = encontrar_maior(jogo, 6);
    printf("Maior valor: %d\n", maior);
    return 0;
}

int encontrar_maior(int *p_v, int tam) {
    int maior = *p_v;
    for (int i=0; i<tam; i++) {
        if (*p_v > maior) {
            maior = *p_v;
        }
        p_v++;
    }
    return maior;
}
