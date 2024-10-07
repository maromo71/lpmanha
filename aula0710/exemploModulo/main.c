#include <stdio.h>

int somaModulo(int n);
int main(){
    int resultado = somaModulo(15);
    printf("Soma dos numeros: %d\n", resultado);
    return 0;
}
int somaModulo(int n) {
    if(n<=0) return 0;
    if(n % 7 == 0) {
        printf("%d\n", n); //opcional
        return n + somaModulo(n - 7);
    }else {
        return somaModulo(n - 1);
    }
}
