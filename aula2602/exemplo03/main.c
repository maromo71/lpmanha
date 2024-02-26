#include <stdio.h>
#define PI 3.1415

int main() {
    double perimetro, area, raio;
    printf("Digite o raio da circunferência: \n");
    scanf("%lf", &raio);
    perimetro = PI * raio * raio;
    area = 2 * PI * raio;
    printf("Perímetro calculado: %.2lf \n", perimetro);
    printf("Area calculada: %.2lf \n", area);
    return 0;
}
