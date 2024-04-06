#include <stdio.h>

int main() {
    double soma = 0.0;
    int i=2, j=50;
    do{
        soma+= (double)i /j;
        j--;
        i+=2;
    }while(j>=1);
    printf("Valor de soma: %3.5f\n", soma);
    return 0;
}
