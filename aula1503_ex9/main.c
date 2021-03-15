#include <stdio.h>
#include <stdlib.h>
#define LIN 8
#define COL 2
int main()
{
    int ra[LIN];
    float notas[LIN][COL];
    for(int i=0; i<LIN; i++){
        printf("Digite o RA do aluno: \n");
        scanf("%d", &ra[i]);
        //pegar duas notas deste aluno
        for(int j=0; j<COL; j++){
            printf("Digite a nota %d do aluno de ra: %d \n", j+1, ra[i]);
            scanf("%f", &notas[i][j]);
        }
    }
    //Percorrer os dados e mostrar a media de cada aluno
    for(int i=0; i<LIN; i++){
        float media = (notas[i][0] + notas[i][1]) / 2;
        printf("O Aluno de RA: %d, teve a media: %.2f \n", ra[i], media);
    }
    return 0;
}
