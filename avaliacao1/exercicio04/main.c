#include <stdio.h>
#include "fibo.h"

int main() {
    int n;
    do{
        printf("Digite um valor maior que 2 e menor que 13\n");
        scanf("%d", &n);
    }while(n<=2 ||n>=13);
    printf("Sequencia: \n");
    generateFibonacci(n);
    printf("\n");
    return 0;
}
