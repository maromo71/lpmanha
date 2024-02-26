#include <stdio.h>
#include <math.h>

int main() {
    double perimetro, area, raio;
    printf("Digite o raio da circunferência: \n");
    scanf("%lf", &raio);
    perimetro = M_PI * pow(raio, 2.0);
    area = 2 * M_PI * raio;
    printf("Perímetro calculado: %.2lf \n", perimetro);
    printf("Area calculada: %.2lf \n", area);
    return 0;
}