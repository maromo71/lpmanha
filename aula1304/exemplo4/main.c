#include <stdio.h>
void sequencia(int n){
    if(n==0)return;
    sequencia(n-1);
    if(n%3==0 ||n%5==0) return;
    printf("%d\n", n);
}
int main() {
    sequencia(20);
    return 0;
}
