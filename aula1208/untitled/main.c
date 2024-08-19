#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a, b, x;
    printf("Digite dois valores inteiros: \n");
    scanf("%d%d", &a, &b);
    if(b){
        x = a / b;
    }else{
        printf("Impossível dividir por ZERO\n");
        exit(1);
    }
    printf("Resultado: %d \n", x);
    return 0;
}
