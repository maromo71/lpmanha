#include <stdio.h>
#define L 5
#define C 3

int somarMatriz(int matriz[L][C]);

int main(void) {
    int m[L][C] = {
                 {1,2,3},
                 {4,5,6},
                 {7,8,9},
                 {1,2,3},
                 {2,3,4}
            };
    int soma = somarMatriz(m);
    printf("Soma dos valores: %d \n", soma);
    return 0;
}

int somarMatriz(int matriz[L][C]){
    int soma = 0;
    for (int i = 0; i <L; i++) {
        for(int j=0; j< C; j++){
            soma+= matriz[i][j];
        }
    }
    return soma;
}
