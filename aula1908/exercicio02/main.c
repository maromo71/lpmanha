#include <stdio.h>

int main(void) {
    int n, x;
    do{
        printf("Digite o numero base da operacao: \n");
        scanf("%d", &x);
    }while(x <=0);
    do{
        printf("Digite o numero de divisores desejados de %d\n", x);
        scanf("%d", &n);
    }while(n<=0);
    int total_div =0;
    //faz até chegar no valor de x enquanto total_div for menor que n.
    for(int i=1; i<=x && total_div<n; i++){
        if(x % i==0){
            printf("%d é divisivel exato por %d \n", x, i);
            total_div++;
        }
    }
    return 0;
}
