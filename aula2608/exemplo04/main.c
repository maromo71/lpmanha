#include <stdio.h>
#define TL 5
#define TC 3
int main(void) {
    //03 notas de 05 alunos
    double notas[TL][TC];
    //receber as notas
    for (int i = 0; i < TL; ++i) {
        for (int j = 0; j < TC; ++j) {
            printf("Digite a nota %d do aluno %d \n", j+1, i+1);
            scanf("%lf", &notas[i][j]);
        }
        printf("\n");
    }
    //declarar um vetor para guardar a melhor de cada aluno (5)
    double melhor_nota[TL] = {0};
    //encontrar a maior nota por aluno
    for (int i = 0; i < TL; ++i) {
        for (int j = 0; j < TC; ++j) {
            if(melhor_nota[i] < notas[i][j]) melhor_nota[i] = notas[i][j];
        }
    }
    double media[TL] = {0};
    //encontrar a media por aluno
    for (int i = 0; i < TL; ++i) {
        for (int j = 0; j < TC; ++j) {
            media[i]+= notas[i][j];
        }
        media[i]/=TC;
    }
    //apresentar todas as notas por aluno
    for (int i = 0; i < TL; ++i) {
        printf("Notas do aluno %d: \n", i+1);
        for (int j = 0; j < TC; ++j) {
            printf("[%2.2lf] ", notas[i][j]);
        }
        printf("\n");
    }
    //imprimir as maiores notas por aluno
    for (int i = 0; i < TL; ++i) {
        printf("Melhor nota do aluno %d ==> %2.2lf\n", i+1, melhor_nota[i]);
    }
    //imprimir a media e a situacao do aluno
    for (int i = 0; i < TL; ++i) {
        printf("Aluno %d, media: %2.2lf, situacao: ", i+1, media[i]);
        media[i] >= 6.0 ? printf("aprovado\n") : printf("reprovado\n");
    }
    return 0;
}
