#include <stdio.h>
/*Frequência de Notas: Em uma turma de 15 alunos,
 *armazene as notas finais (0 a 10) em um vetor.
 *Calcule a média da turma e exiba quantas notas
 *estão acima da média e quantas estão abaixo.
 **/
int main(void) {
    double notas[15];
    double soma=0.0, media;
    int qtd_acima=0, qtd_abaixo =0;
    //primeiro alimentar o vetor com as 15 notas
    for (int i=0; i<15; i++) {
        printf("Digite a media final do aluno: ");
        scanf("%lf", &notas[i]);
        soma += notas[i]; //acumular as notas para achar a media
    }
    //calcular a media
    media = soma/15;
    //contar as frequencias abaixo e acima da media
    for (int i=0; i<15; i++) {
        if (notas[i] > media) qtd_acima++;
        if (notas[i] < media) qtd_abaixo++;
    }
    printf("Media da sala: %.2lf\n", media);
    printf("Quantidade de alunos acima da media: %d\n", qtd_acima);
    printf("Quantidade de alunos abaixo da media: %d\n", qtd_abaixo);
    return 0;
}
