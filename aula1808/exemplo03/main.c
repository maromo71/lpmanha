#include <stdio.h>
#include <math.h>
int main(void)
{
    double raio, area, perimetro;
    printf("Digite o valor do raio: \n ");
    scanf("%lf", &raio);
    area  = pow(raio, 2) * M_PI;
    perimetro = 2 * area;
    printf("Valor da area: %.5lf \n", area);
    printf("Valor da perimetro: %.5lf \n", perimetro);
    return 0;
}