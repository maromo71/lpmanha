#include <stdio.h>
//Receber 10 notas de alunos, uma para cada
//Descobrir qual foi a maior nota e quantos alunos
//obtiveram a maior nota.
int main(void) {
    int notas[10];
    int maior, quantidade=0;
    //1. receber os dez valores (notas)
    for (int i = 0; i<10; i++) {
        printf("Digite uma nota [0..10] \n");
        scanf("%d", &notas[i]);
    }
    //2. encontrar qual foi a maior
    maior = notas[0]; //inicializar o maior valor com uma nota, nesta caso a 1a.
    for (int i = 1; i<10; i++) { //comecamos na 2a posicao
        if (maior < notas[i]) maior = notas[i];
    }
    //3. descobrir quantos alunos obtiveram a maior nota
    for (int i=0; i<10; i++) {
        if (maior == notas[i]) quantidade++;
    }
    printf("Maior nota dos alunos: %d \n", maior);
    printf("Quantidade de alunos: %d\n", quantidade);
    return 0;
}
