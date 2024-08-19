#include <stdio.h>

int main(void) {
    int x = (5<7);
    if(x){
        printf("Verdadeiro \n");
    }else{
        printf("Falso \n");
    }
    printf("Valor de x: %d \n", x);
    return 0;
}
