#include <stdio.h>
void ler(int n);
int main(void) {
    int quantidade;
    printf("Digite a quantidade: \n");
    scanf("%d", &quantidade);
    ler(quantidade);
    return 0;
}
void ler(int n){
    int maior, menor;
    for (int i = 0; i < n; ++i) {
        int valor;
        printf("Digite um valor: \n");
        scanf("%d", &valor);
        if(i==0){
            maior = valor;
            menor = valor;
        }
        if(valor > maior) maior = valor;
        if(valor < menor) menor = valor;
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}
