#include <stdio.h>

int main(void) {
    int n = 891; //tres numeros quaisquer
    int x = 3;
    for (int i = 0; i <3; i++) {
        //em cada passagem
        //x = x "3" + 1 ("Resto por 10 de 891")
        x+= n % 10;
        //na ultima passagem teremos 6 como resultado
        //para essa entrada
    }
    printf("Valor de x: %d \n", x);
    return 0;
}
