#include <stdio.h>

int main(void) {
    int n,soma=0;
    do{
        do{
            printf("Digite um valor para n: \n");
            scanf("%d", &n);

        }while(n<0 || n>=10);
        if(n%2==1) soma+= n;
    }while(n!=0);
    printf("Soma dos impares: %d \n", soma);
    return 0;
}
