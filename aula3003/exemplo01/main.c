#include <stdio.h>
//Pedir 10 valores ao usuario
//Exibir os 10 valores na ordem invertida de entrada
int main(void) {
    //1. Estrutura vetorizada para guardar 10 valores
    int x[10];
    //2. Montar a estrutura de repeticao para receber os valores
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: \n");
        scanf("%d", &x[i]);
    }
    //3. Desafio - apresentar na ordem inversa
    for (int i=9; i>=0; i--) {
        printf("x[%d] = %d\n", i, x[i]);
    }
    return 0;
}
