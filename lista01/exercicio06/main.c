/*
* Escreva um programa que leia 3 notas de 5 alunos e a
* média das notas dos exercícios realizados por eles.
* Calcular a média de aproveitamento,
* usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7.
*/
#include <stdio.h>

int main(void) {
    double n1, n2, n3, me;
    printf("Lendo 3 notas e a media dos exercicios de cada um dos alunos\n");
    for (int i = 1; i <= 5; i++) {
        printf("Digite a nota 1 do aluno %d \n", i);
        scanf("%lf", &n1);
        printf("Digite a nota 2 do aluno %d \n", i);
        scanf("%lf", &n2);
        printf("Digite a nota 3 do aluno %d \n", i);
        scanf("%lf", &n3);
        printf("Digite a media de exercicios do aluno %d \n", i);
        scanf("%lf", &me);
        double ma = (n1 + n2*2 + n3*3 + me)/7.0;
        printf("Media Ponderada do Aluno %d ==> %.2lf\n", i, ma);
    }
    return 0;
}