#include <stdio.h>

int main() {
    int i=1, j=1;
    double soma = 0.0;
    do{
        soma += i/(double)j;
        i+=2;
        j++;
    }while(j<=30);
    printf("Soma: %lf.2\n", soma);
    return 0;
}
