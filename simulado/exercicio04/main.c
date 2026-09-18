#include <stdio.h>

int main(void) {
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
        int pri = 0, seg = 1, prox;
        if (N>=2) {
            for (int termo=2; termo<=N; termo++) {
                prox = pri + seg;
                pri = seg;
                seg = prox;
            }
        } else {
            if (N==0) prox = 0;
            if (N==1) prox = 1;
        }
        printf("O Fibonnaci de %d = %d\n", N, prox);
    }
    return 0;
}
