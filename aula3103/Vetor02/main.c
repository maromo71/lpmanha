/*
2. Desenvolva um programa que leia um vetor de 8 posições e, em seguida, encontre o maior
valor e a sua posição no vetor. Faça o mesmo para o menor valor.
 */
#include <stdio.h>
#include <stdlib.h>
#define T 8 //tamanho do vetor
int main(void) {
    int v[T];
    int maior, menor, pos_maior, pos_menor;
    //ler os valores
    for(int i=0; i<T; i++){
      printf("Digite o valor da posicao v[%d]: \n", i);
      scanf("%d", &v[i]);
    }
    //encontrar o maior e menor e as respectivas posicoes
    maior = v[0];
    menor = v[0];
    pos_maior = 0;
    pos_menor = 0;
    for(int i=0; i<T; i++){
      if(v[i] > maior){
        maior = v[i];
        pos_maior = i;
      }
      if(v[i] < menor){
        menor = v[i];
        pos_menor = i;
      }
    }
    printf("O maior valor eh: %d e esta na posicao [%d]\n", maior, pos_maior);
    printf("O menor valor eh: %d e esta na posicao [%d]\n", menor, pos_menor);
    return 0;
}