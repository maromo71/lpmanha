#include <stdio.h>

int main() {
    int n, qtd=0, soma=0;
    double media=0.0;
    do{
        printf("Digite um número: \n");
        scanf("%d", &n);
        if(n >= 0){
            soma+= n;
            qtd++;
        }
    }while(n >=0);
    media = (double)soma / qtd;
    printf("Média é: %.2f", media);
    return 0;
}
