#include <stdio.h>
int fatorial(int n){
    int resultado;
    if(n==1) return 1;
    resultado =  n * fatorial(n-1);
    return resultado;
}
int main() {
    int x;
    printf("Digite valor: \n");
    scanf("%d", &x);
    int res = fatorial(x);
    printf("Fatorial de %d = %d \n", x, res);
    return 0;
}
