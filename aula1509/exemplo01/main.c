#include <stdio.h>
#define L 5
#define C 3
int main(void) {
    double notas[L][C];
    //Notas de 05 (2 notas por aluno)
    for (int i = 0; i < L; i++) {
        printf("Notas do aluno: %d\n", i+1);
        for (int j = 0; j < C-1; j++) {
            printf("Digite a %d nota: ", j+1);
            scanf("%lf", &notas[i][j]);
        }
        notas[i][2] = (notas[i][0] + notas[i][1])/2;
    }
    //Apresentar o resultado dos 05 alunos
    for (int i = 0; i < L; i++) {
        printf("Media: %.2lf\n", notas[i][C-1]);
        if (notas[i][C-1] >= 6.0) {
            printf("Aluno %d aprovado.\n", i+1);
        }else {
            printf("Aluno %d reprovado.\n", i+1);
        }
    }
    return 0;
}