#include <stdio.h>
int main(void) {
    int N; //numero de testes
    double C; //carga de comida para cada teste
    do {
        printf("Entre com o numero de testes: \n");
        scanf("%d", &N);
        if (N<1 || N>1000) printf("Numero de testes invalido!\n");
    }while (N<1 || N>1000);
   //Estrutura QUE SE REPETE (N) VEZES.
    for (int i=1; i<=N; i++) { //Repetir para N testes o pedido de carga C
        do {
              printf("Digite a carga de comida: \n");
            scanf("%lf", &C);
            if (C<1 || C>1000) printf("Carga invalida!\n");
        }while (C<1 || C>1000);

        int dias = 0;
        while (C > 1) {
            C = C / 2;
            dias++;
        }
        printf("%d dias\n", dias);
    }
    printf("Fim do programa!\n");
    return 0;
}
