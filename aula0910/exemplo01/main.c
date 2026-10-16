#include <stdio.h>

int main(void) {
    // representar 4 notas para 2 alunos
    double notas[2][4];
    //alimentar a matriz - entrada
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite a nota %d do aluno %d: ", j+1, i+1);
            scanf("%lf", &notas[i][j]);
        }
    }
    // apresentar as notas na tela, por aluno
    for (int i = 0; i < 2; i++) {
        printf("\nNotas do aluno %d:  ", i+1);
        for (int j = 0; j < 4; j++) {
            printf("[%3.1lf] ", notas[i][j]);
        }
    }
    return 0;
}
