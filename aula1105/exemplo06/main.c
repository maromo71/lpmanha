#include <stdio.h>
int fibo(int n);
int fiboc(int n);
int pilha = 0;
int main(void) {
    int n;
    printf("Digite o termo do fibonacci: \n");
    scanf("%d", &n);
    int fibonacci = fibo(n);
    printf("Fibonacci do termo %d = %d\n",n, fibonacci);
    printf("Pilhas: %d \n", pilha);
    return 0;
}

int fibo(int n) {
    pilha++;
    if (n == 1 || n == 2) return 1;
    return fibo(n-1)+fibo(n-2);
}

int fiboc(int n) {
    pilha++;
    int resultado = 0;
    int prim = 1;
    int seg = 1;
    for (int i = 3; i <=n; i++) {
        resultado = prim + seg;
        prim = seg;
        seg = resultado;
    }
    return resultado;
}