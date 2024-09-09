#include <stdio.h>
int somar(int a, int b, int c);
int main(void) {
    int a, b, c;
    printf("Digite tres valores inteiros\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Soma dos quadrados: %d \n", somar(a, b, c));
    return 0;
}
int somar(int a, int b, int c){
    return (a*a) + (b*b) + (c*c);
}
