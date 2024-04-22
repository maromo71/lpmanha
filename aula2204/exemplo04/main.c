#include <stdio.h>
int somar(int * ptr, int t);
void imprimirReverso(int *ptr, int n);
int main() {
    int v[] = {10, 20, 30, 40, 50};
    printf( "soma vale %d \n", somar(v, 5));
    imprimirReverso(v, 5);
    return 0;
}
int somar(int * ptr, int t){
    int soma = 0;
    for (int i = 0; i < t; ++i) {
        soma+= *ptr++;
    }
    return soma;
}
void imprimirReverso(int *ptr, int n){
    if(n == 0) return;
    ptr++;
    imprimirReverso(ptr, n - 1);
    ptr--;
    printf("%d\n", *ptr);
}
