#include <stdio.h>
#define PI 3.14159265 //Constante definida  PI
int main(void)
{
    double raio, area, perimetro;
    printf("Digite o valor do raio: \n ");
    scanf("%lf", &raio);
    area  = (raio * raio) * PI;
    perimetro = 2 * area;
    printf("Valor da area: %.5lf \n", area);
    printf("Valor da perimetro: %.5lf \n", perimetro);
    return 0;
}