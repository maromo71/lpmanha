#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14286

int main()
{
    double area, perimetro, raio;
    printf("Digite o valor do raio: \n");
    scanf("%lf", &raio);
    area = PI * pow(raio, 2.0);
    perimetro = 2 * PI * raio;
    printf("Valor da area: %.3lf \n", area);
    printf("Valor do perimetro: %.3lf \n", perimetro);
    return 0;
}
