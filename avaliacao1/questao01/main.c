#include <stdio.h>

int main(void) {
    //somatoria
    double soma = 0.0;
    for (int i = 1, j=1; i <=59 ; i+=2, j++) {
        if(j%2==1){
            soma+= (double)i/j;
        }else{
            soma-= (double)i/j;
        }
    }
    printf("Somatoria: %.2f \n", soma);
    return 0;
}
