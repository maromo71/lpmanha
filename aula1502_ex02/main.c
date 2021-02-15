#include <stdio.h>
#include <stdlib.h>
#define PI 3.14



int main()
{
    printf("Valor de x:  %d \n", x);
    double raio, area;
    printf("Digite o valor do raio: \n");
    scanf("%lf", &raio);
    area = PI * (raio * raio);
    printf("Valor da area: %lf \n", area);

    return 0;
}

