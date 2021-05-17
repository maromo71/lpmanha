#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"
struct computador {
    char nome[51];
    float preco;
};
void entrar_dados(struct computador *Comp, int tam){
    for(int i =0; i< tam; i++){
        while(getchar()!='\n');
        printf("Nome do computador: \n");
        scanf("%[^\n]s", Comp[i].nome);
        while(getchar()!='\n');
        printf("Digite o preco: \n");
        scanf("%f", &Comp[i].preco);
    }
}

int maior_preco(struct computador *Comp, int tam){
    float maior = Comp[0].preco;
    int p = 0;
    for(int i=1; i<tam; i++){
        if(maior < Comp[i].preco){
            maior = Comp[i].preco;
            p = i;
        }
    }
    return p;
}

