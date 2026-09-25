#include <stdio.h>
#define T 100
int main(void) {
    int primos[T] = {0};
    int contador = 0;
    //preencher as 100 posicoes com os 100 primeiros primos conhecidos
    //um numero eh primo quando ele eh divisivel somente por 1 e por
    //ele mesmo
    int numero = 2;
    //estrategia contador para testar os valores
    //contar apenas quando for primo.
    while (contador < T) {
        int primo = 1;
        //verificar se numero eh primo
        for (int i = 2; i<=numero/2; i++) {
            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            primos[contador] = numero;
            contador++;
        }
        numero++;
    }
    //percorrer e mostrar os 100 numero primos conhecidos
    for (int i = 0; i < T; i++) {
        printf("%d  =  [%3d] \n",i+1,  primos[i]);
    }
    return 0;
}
