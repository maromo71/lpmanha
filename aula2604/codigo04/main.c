#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[] = {3, 5, 7, 9, 1, 2, 4, 6, 0};
    for(int i=0; i<9; i++){
        printf("Valor: %d \n", vetor[i]);
    }
    int * ptr_vetor = vetor;
    for(int i=0; i<9; i++){
        printf("Valor: %d \n", *ptr_vetor++);
    }
    return 0;
}
