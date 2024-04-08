#include <stdio.h>
#define T_MAX 10
int encontrarMaior(int v[], int qtd);
int main() {
    int v[T_MAX] = {0};
    int cont = 0;

    int n;
    do{
        printf("Digite valor: \n");
        scanf("%d", &n);
        if(n == 0) break;
        v[cont++] = n;
    }while(cont<10);

    if (cont==0){
        printf("Voce entrou apenas com o 0\n");
    }else {
        int maior = encontrarMaior(v, cont);
        printf("Maior valor: %d\n", maior);
    }
    return 0;
}
int encontrarMaior(int v[], int qtd){
    int maior = v[0];
    for (int i = 1; i < qtd; ++i) {
        if(v[i] > maior) maior = v[i];
    }
    return maior;
}
