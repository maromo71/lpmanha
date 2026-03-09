#include <stdio.h>

int main(void) {
    int nota;
    printf("Digite a nota final [0..100]\n");
    scanf("%d", &nota);
    if (nota< 40) {
        printf("Reprovado\n");
    }else if (nota< 60) {
        printf("Suficiente\n");
    }else if (nota< 80) {
        printf("Bom\n");
    }else if (nota < 90) {
        printf("Muito bom");
    }else if (nota <= 100) {
        printf("Excelente\n");
    }else {
        printf("Nota erronea \n");
    }
    return 0;
}