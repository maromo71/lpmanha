#include <stdio.h>
#define PI 3.14159

int main(void) {
    double area, perimetro, raio;
    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);
    area = PI * raio * raio;
    perimetro = 2 * PI * raio;
    printf("A area da circulo eh: %.2lf \n", area);
    printf("O perimetro do curculo eh: %.2lf \n", perimetro);
    return 0;
}
