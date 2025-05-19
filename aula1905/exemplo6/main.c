#include <stdio.h>
int somar_matriz(int *p_matriz, int t);
int main(void)
{
    int matriz[5][5] = {
        {1,2,3,4,5},
        {2,3,4,5,6},
        {3,4,5,6,7},
        {4,5,6,7,8},
        {5,6,7,8,9}
    };
    printf("Soma da matriz: %d \n", somar_matriz(matriz, 5));
    return 0;
}
int somar_matriz(int *p_matriz, int t)
{
    int soma = 0;
    for (int i= 0; i < (t*t); i++) {
        soma += *p_matriz++;
    }
    return soma;
}