#include <stdio.h>
#include <stdlib.h>

void entrar_dados(float **matriz, int linhas, int colunas){
    for(int i = 0; i< linhas; i++){
        printf("Aluno %d \n", i+1);
        printf("-------- \n");
        for(int j=0; j<colunas; j++){
            printf("Digite a nota %d do aluno %d: ", j+1, i+1);
            scanf("%f", &matriz[i][j]);
        }
    }
}
void apresentar_media(float **matriz, int linhas, int colunas){
    float media, soma;
    for(int i = 0; i< linhas; i++){
        soma=0;
        printf("Aluno %d \n", i+1);
        printf("-------- \n");
        for(int j=0; j<colunas; j++){
            soma += matriz[i][j];
        }
        media = soma / colunas;
        printf("A média do aluno: %.2f \n ", media);
    }
}
int main()
{
    float **notas = NULL;
    int alunos, qtd_notas;
    printf("Número de alunos: \n");
    scanf("%d", &alunos);
    printf("Número de notas por aluno: \n");
    scanf("%d", &qtd_notas);
    //Alocar a matriz com as linhas
    notas =(float**) malloc(sizeof(float*) * alunos);
    //Alocar cada vetor
    for(int i=0; i<alunos; i++){
        notas[i] = (float*) malloc(sizeof(float) * qtd_notas);
    }
    entrar_dados(notas, alunos, qtd_notas);
    apresentar_media(notas, alunos, qtd_notas);
    return 0;
}
