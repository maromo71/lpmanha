#include <stdio.h>

int main(void)
{
    int num;
    float num2;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);
    num2 = (float)num;
    num2 = num2 * 0.5;
    num = (int)num2;
    printf("Valor final de num: %d\n", num);
    return 0;
}