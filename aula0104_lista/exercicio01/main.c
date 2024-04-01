#include <stdio.h>
//Verificação se um número inserido é primo ou não.
int ehPrimo(int x);
int main() {
    int x;
    printf("Digite o número a ser testado: \n");
    scanf("%d", &x);
    if(ehPrimo(x)){
        printf("Valor %d é primo \n", x);
    }else{
        printf("Valor %d não é primo\n", x);
    }
    return 0;
}
int ehPrimo(int x){
    for(int i=2; i<(x/2); i++){
        if(x % i ==0) {
            return 0;
        }
    }
    return 1;
}
