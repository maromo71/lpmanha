#include <stdio.h>
#include <string.h>
void lerDados(char nomes[10][51], int totalAlunos) {
    for (int i=0; i<totalAlunos; i++) {
        printf("Digite o %d nome \n", i+1);
        gets(nomes[i]);
    }
}
void imprimir(char nomes[10][51], int totalAlunos) {
    for (int i=0; i<totalAlunos; i++) {
        puts(nomes[i]);
    }
}
void ordenar(char nomes[10][51], int totalAlunos) {
    for (int i=0; i<10; i++) {
        for (int j=i+1; j<10; j++) {
            if (strcmp(nomes[i], nomes[j])==1) {
                char aux[51];
                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }
}
int main(void) {
    char nomes[10][51];
    lerDados(nomes, 10);
    printf("Imprimindo lista entrada: \n");
    imprimir(nomes, 10);
    ordenar(nomes, 10);
    printf("Imprimindo lista ordenada: \n");
    imprimir(nomes, 10);
    return 0;
}
