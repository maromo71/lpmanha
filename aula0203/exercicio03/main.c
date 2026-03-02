#include <stdio.h>

int main(void) {
    int res;
    printf("Digite o Resultado do Teste [0..100]\n");
    scanf("%d", &res);
    if (res < 40) {
        printf("REPROVADO \n");
    }else if (res < 60) {
        printf("SUFICIENTE \n");
    }else if (res < 80) {
        printf("BOM\n");
    }else if (res < 90) {
        printf("MUITO BOM\n");
    }else {
        printf("EXCELENTE \n");
    }
    //Pergunta o que acontece se digitar 101
    //Melhore o programa
    return 0;
}