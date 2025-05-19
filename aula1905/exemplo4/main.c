#include <stdio.h>
void percorrer_vetor(int *p_v, int tamanho);
int main(void)
{
    int vetor[5] = {2, 4, 6, 8, 10};
    int x = 10;
    percorrer_vetor(vetor, 5);
    return 0;
}
void percorrer_vetor(int *p_v, int tamanho)
{
    for (int i=0; i<tamanho; i++) {
        printf("%d \n", *p_v++);
    }
}