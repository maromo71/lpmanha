#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"

void gerar(int v[], int t){
    srand(time(NULL));
    for(int i=0; i<t; i++){
        v[i] = rand() % 100;
    }
}

void mostrar(int v[], int t){
    printf("Dados do vetor no momento: \n");
    printf("--------------------------  \n");
    for(int i=0; i<t; i++){
        printf("[%2d] ", v[i]);
    }
    printf("\n\n");
}

void ordenar(int v[], int t){
    //Método de troca (selection sort)
    for(int i=0; i<t; i++){
        for(int j=i+1; j<t; j++){
            if(v[i]>v[j]){
                int troca = v[i];
                v[i] = v[j];
                v[j] = troca;
            }
        }
    }

}
