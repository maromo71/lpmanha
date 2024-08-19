#include <stdio.h>


int main(void) {
    int i, j;
    double soma = 0.0;
    for(i=1,j=1; i<=50; i++, j+=2){
        soma+= i / (double)j;
    }
    printf("Somatoria: %.2lf\n", soma);
    return 0;
}
