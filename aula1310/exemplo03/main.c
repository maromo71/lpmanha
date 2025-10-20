#include <stdio.h>
void up(int n);
void down(int n);
int fibo(int n, int *cont);
int main(void) {
    int contador = 0;
    int x = 10;
    up(x);
    down(x);
    printf("Fibo de 12: %d \n", fibo(12, &contador));
    printf("Montei %d pilhas \n", contador);
    return 0;
}

void up(int n) {
    if (n==0)return;
    up(n-1);
    printf("%d\n", n);
}
void down(int n) {
    if (n==0)return;
    printf("%d\n", n);
    down(n-1);
}
int fibo(int n, int *cont){
    *cont = *cont + 1;
    printf("Chamada: %d, N: %d\n", *cont, n);
    if (n==1 || n==2)return 1;
    return fibo(n-1, cont) + fibo(n-2, cont);
}