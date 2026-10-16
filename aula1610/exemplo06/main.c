#include <stdio.h>
int somar(int n);
int somarModulo3(int n);
int main(void) {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("soma de 1 ate %d \n", n);
    int resultado = somar(n);
    printf("Resultado: %d\n", resultado);
    int modulo = somarModulo3(n);
    printf("Soma dos modulos de 3: %d\n", modulo);
    return 0;
}

int somar(int n) {
    if (n==0) return 0;
    return n + somar(n-1);
}
int somarModulo3(int n) {
    if (n==0) return 0;
    if (n % 3 == 0) return n +  somarModulo3(n - 3);
    return  somarModulo3(n - 1);
}
