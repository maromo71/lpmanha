#include <stdio.h>
#define D 5
#define DIM 10
int main(void) {
    int v1[D]={0}, v2[D]={0}, intersec[D]={0};
    int uniao[DIM]={0};
    int cont = 0;
    do {
        int num;
        printf("Digite um numero inteiro > 0: \n");
        scanf("%d", &num);
        //verifica se o numero entrada ja existe no vetor
        int tem = 0;
        for (int i =0; i < D; i++) {
            if (num == v1[i]) {
                tem = 1;
                break;
            }
        }
        if (!tem) { //mesmo que tem == 0
            v1[cont] = num;
            cont++;
        }
    }while (cont<5);
    cont = 0;
    do {
        int num;
        printf("Digite um numero inteiro > 0: \n");
        scanf("%d", &num);
        //verifica se o numero entrada ja existe no vetor
        int tem = 0;
        for (int i =0; i < D; i++) {
            if (num == v2[i]) {
                tem = 1;
                break;
            }
        }
        if (!tem) { //mesmo que tem == 0
            v2[cont] = num;
            cont++;
        }
    }while (cont<5);
    //percorrer o primeiro, alimentando o uniao
    for (int i =0; i < D; i++) {
        uniao[i] = v1[i];
    }
    cont = 5;
    //percorrer o segundo, alimentando o uniao qdo for diferente
    for (int i=0; i < D; i++) {
        int tem = 0;
        for (int j=0; j < D; j++) {
            if (v2[i]==uniao[j]) {
                tem = 1;
                break;
            }
        }
        if (!tem) {
            uniao[cont] = v2[i];
            cont++;
        }
    }
    //interseccao - colocar elementos iguais do v1 e v2 no intersec
    cont = 0;
    for (int i=0; i < D; i++) {
        for (int j=0; j < D; j++) {
            if (v1[i]==v2[j]){
                intersec[cont] = v1[i];
                cont++;
                break; //sai do for de j (vai para o prox numero)
            }
        }
    }
    //mostrar todos os vetores
    printf("Dados do vetor [v1]: ");
    for (int i=0; i < D; i++) {
        printf("[%d] ", v1[i]);
    }
    printf("\n");
    printf("Dados do vetor [v2]: ");
    for (int i=0; i < D; i++) {
        printf("[%d] ", v2[i]);
    }
    printf("\n");
    printf("Dados do vetor [intersec]: ");
    for (int i=0; i < D; i++) {
        if (intersec[i]!=0) printf("[%d] ", intersec[i]);
    }
    printf("\n");
    for (int i=0; i < DIM; i++) {
        if (uniao[i]!=0)printf("[%d] ", uniao[i]);
    }
    printf("\n");
    return 0;
}