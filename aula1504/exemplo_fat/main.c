#include <stdio.h>
int fatorial(int n){
    if(n==1) return 1;
    return n * fatorial(n-1);
}
int main() {
    printf("Fatorial de um numero: \n");
    printf("Digite o valor \n");
    int n;
    scanf("%d", &n);
    printf("Resultado: %d\n", fatorial(n));
    return 0;
}
