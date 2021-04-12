#include <stdio.h>
#include <stdlib.h>
void trocar(int *a, int *b);
void imprimir(int *v, int t);
void ordenar(int *v, int t);
int main()
{
    int v[] = {33, 11, 10, 78, 21, 5, 9, 3, 7, 14};
    imprimir(v, 10);
    ordenar(v, 10);
    imprimir(v, 10);
    return 0;
}
void imprimir(int *v, int t){
    printf("Dados do vetor \n");
    for(int i = 0; i<t; i++){
        printf("[%3d] ", v[i]);
    }
    printf("\n\n");
}
void ordenar(int *v, int t){
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            if(v[i]<v[j]){
                trocar(&v[i], &v[j]);
            }
        }
    }
}
void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
