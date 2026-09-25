#include <stdio.h>
#define T 20
int main(void) {
    int caixa[T] = {0};
    //1. ler as entradas para as 20 caixas
    for (int i = 0; i < T; i++) {
        printf("Insira o valor de itens na caixa [%d] : " i+1);
        scanf("%d", &caixa[i]);
    }

    //2. Qual é a maior quantidade bolinhas em uma caixa
    int maior = caixa[0];
    for (int i = 1; i < T; i++) {
        if (maior < caixa[i]) maior = caixa[i];
    }

    //3. Qual é a menor quantidade bolinhas em uma caixa
    int menor = caixa[0];
    for (int i = 1; i < T; i++) {
        if (menor > caixa[i]) menor = caixa[i];
    }


    //4. Media de bolinhas por caixa
    double total = 0;
    for (int i = 0; i < T; i++) {
        total += caixa[i];
    }
    double media = total / T;


    //5. Exibir os resultados
    printf("Maior quantidade de itens: %d \n", maior);
    printf("Menor quantidade de itens: %d \n", menor);
    printf("Media de produtos por caixa: %.0f \n", media);


    return 0;
}
