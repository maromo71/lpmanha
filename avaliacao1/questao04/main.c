#include <stdio.h>

int main(void) {
    int n;
    do{
        printf("Digite um numero maior que 1 e impar: \n");
        scanf("%d", &n);
    }while(n<2 || n%2==0);
    for (int i = 2; i <= n; ++i) { //ver todos entre 2 e ele
        int primo = 1;
        for (int j = 2; j < i; ++j) {
            if(i % j ==0) {
                primo = 0;
                break;
            }
        }
        if(primo) printf("Primo: %d \n", i);
    }
    return 0;
}
