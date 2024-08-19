#include <stdio.h>

int main(void) {
    //pegar o cinco valores
    for (int i = 1; i <= 5; ++i) {
        int n;
        do {
            printf("Digite o %do) valor: \n", i);
            scanf("%d", &n);
        } while (n <= 0);
        //mostrar os divisiveis exatos do numero exceto ele mesmo
        int soma=0;
        for (int i = 0; i <= n / 2; ++i) {
            if (n % i == 0) {
                printf("%d é divisível exato por %d\n", n, i);
                soma+= i;
            }
        }
        printf("Soma dos divisores exatos de %d =  %d\n", n, soma);
    }
    return 0;
}
