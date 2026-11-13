#include <stdio.h>

void intercalar(int *p_v1, int *p_v2, int * p_vc, int t);
void imprimir(int * p_vc, int t);
void ordenar(int *p_vc, int t);
int main(void) {
    int vetor_1[5] = {21, 5, 5, 7, 9};
    int vetor_2[5] = {6, 9, 6, 13, 10};
    int vetor_c[10] = {0};
    intercalar(vetor_1, vetor_2, vetor_c, 5);
    ordenar(vetor_c, 5);
    imprimir(vetor_c, 10);

    return 0;
}
void intercalar(int *p_v1, int *p_v2, int * p_vc, int t) {
    for (int i=0; i<t; i++) {
        *p_vc = *p_v1++;
        p_vc++;
        *p_vc = *p_v2++;
        p_vc++;
    }
}
void imprimir(int * p_vc, int t) {
    for (int i=0; i<t; i++) {
        printf("[%d ]", *p_vc++);
    }
}
void ordenar(int *p_vc, int t) {
    //ordenar o vetor que ja estar intercalar
    //semana me cobrem -- eu cobro voces
}