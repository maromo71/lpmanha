#include <stdio.h>

int main(void) {
    int n;
    int somap = 0; //soma da diagonal principal
    int somas = 0; //sona da diaginal secundaria
    int somat = 0; //somatoria total
    printf("Digite a dimensao da matriz: \n");
    scanf("%d", &n);
    int m[n][n];
    //receber os dados do usuario
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Digite o valor do elemento: \n");
            scanf("%d", &m[i][j]);
        }
    }
    //somatorias
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i==j) somap+= m[i][j];
            if(j==(n-1-i)) somas+= m[i][j];
            somat+= m[i][j];
        }
    }
    printf("Soma principal: %d \n", somap);
    printf("Soma secundaria: %d \n", somas);
    printf("Soma total: %d \n", somat);
    return 0;
}
