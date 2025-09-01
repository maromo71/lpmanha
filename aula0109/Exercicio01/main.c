#include <stdio.h>

int main(void){
    int moedas = 0;
    int numMoeda = 0;
    do {
        do {
            printf("Num de Moedas no Bau: \n");
            scanf("%d", &numMoeda);
            if (numMoeda <0) printf("Valor Invalido\n");
        }while (numMoeda < 0);
        moedas += numMoeda; // moeda = moeda + numMoeda
    }while (numMoeda);
    printf("Total de Moedas Encontradas: %d \n", moedas);
    return 0;
}