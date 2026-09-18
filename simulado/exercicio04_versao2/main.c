#include <stdio.h>

int main(void) {
    //montar a tabela de 60 testes
    double tabela[60] = { 0, 1};
    double pri = 0, seg = 1, prox;
    for (int i=2; i<=60; i++) {
            prox = pri + seg;
            tabela[i] = prox;
            pri = seg;
            seg = prox;
    }
    int T; //numero de testes
    int N; //N-ezimo termo desejado
    printf("Digite o numero de termos a serem resolvidos: \n");
    scanf("%d", &T);
    for (int i = 1; i<=T; i++) { //Total de testes T
        do {
            printf("Qual a sequencia de fibonnaci voce quer saber: \n");
            scanf("%d", &N);
            if (N<0 || N>100) printf("Sequencia desejada invalida \n");
        }while (N<0 || N>60);
        printf("O Fibonnaci de %d ==> %.0f\n", N, tabela[N]);
    }
    return 0;
}
