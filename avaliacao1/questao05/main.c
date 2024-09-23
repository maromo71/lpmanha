#include <stdio.h>

int main(void) {
    int n, i, j;
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);
    for (i = 1; i <= n ; i++) {
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
    //resposta c)
    //imprime os numeros de 1 a n em colunas.
    //cada coluna vai de 1 até o numero da linha correspondente
}
