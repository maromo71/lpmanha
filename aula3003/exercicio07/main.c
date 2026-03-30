#include <stdio.h>

int buscarMaior(int v[], int n);

int main(void) {
    int v[] = {2, 11, 4}; // Teste com 03 valores, depoios mude para 10
    printf("Maior valor: %d\n", buscarMaior(v, 3));
    return 0;
}

int buscarMaior(int v[], int n) {
    if (n == 1) return v[0]; // valor da primeira posicao
    int maior = buscarMaior(v, n - 1);
    return (v[n - 1] > maior) ? v[n - 1] : maior;
}
