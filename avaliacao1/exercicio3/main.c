#include <stdio.h>

#define MAX 15
#define STOP -100
#define MIN_VALID -50
#define MAX_VALID 50

// Função para calcular a média das temperaturas válidas
double calcularMedia(int temps[], int count) {
    int soma = 0;
    int qtdTempValidas = 0;
    for (int i = 0; i < count; i++) {
        if (temps[i] >= MIN_VALID && temps[i] <= MAX_VALID) {
            soma += temps[i];
            qtdTempValidas++;
        }
    }
    if (qtdTempValidas == 0) return 0; // Evita divisão por zero se não houver temperaturas válidas
    return (double)soma / qtdTempValidas;
}

int main() {
    int temperaturas[MAX];
    int cont = 0;

    printf("Insira as temperaturas (Digite -100 para parar): \n");
    for (int i = 0; i < MAX; i++) {
        int temp;
        scanf("%d", &temp);
        if (temp == STOP) {
            break;
        }
        temperaturas[i] = temp;
        cont++;
    }
    double media = calcularMedia(temperaturas, cont);
    printf("A média das temperaturas válidas é: %.2f°C\n", media);
    return 0;
}