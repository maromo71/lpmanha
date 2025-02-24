/*
*Abaixo de 40: Reprovado
40 a 59: Suficiente
60 a 79: Bom
80 a 89: Muito Bom
90 a 100: Excelente
 */
#include <stdio.h>

int main(void) {
    double nota;
    printf("Digite a nota final \n");
    scanf("%lf", &nota);
    if (nota < 40) {
        printf("Reprovado\n");
    }else {
        if (nota < 60) {
            printf("Suficiente\n");
        }else {
            if (nota < 80) {
                printf("Bom\n");
            }else {
                if (nota < 90) {
                    printf("Muito Bom\n");
                }else {
                    if (nota <= 100) {
                        printf("Excelente\n");
                    }
                }
            }
        }
    }
    return 0;
}