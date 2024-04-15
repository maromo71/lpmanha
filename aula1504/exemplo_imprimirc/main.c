#include <stdio.h>
void imprimir(int n){
    if(n==0)return;
    printf("%d\n", n);
    imprimir(n-1);

}
int somatoria(int n){
    if(n==1) return 1;
    return n + somatoria(n-1);
}
int main() {
    imprimir(11);
    printf("Somatoria: %d \n", somatoria(5));
    return 0;
}
