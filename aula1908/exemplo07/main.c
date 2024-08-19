#include <stdio.h>

int main(void) {
    int n;
    //validar (n > 1)
    do{
        printf("Numero a ser testado \n");
        scanf("%d", &n);
    }while(n<1);
    //checar se nao é primo
    for (int i = 2; i <= n/2; ++i) {
        if(n % i==0){
            printf("numero nao eh primo \n");
            return 0;
        }
    }
    printf("numero eh primo\n");
    return 0;
}
