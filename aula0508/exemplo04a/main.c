#include <stdio.h>
#include <math.h>

int main(void) {
    double raio, area, perimetro;
    printf("Entre com o valor do Raio: \n");
    scanf("%lf", &raio);
    area = M_PI * pow(raio, 2.0);
    perimetro = 2 * M_PI * raio;
    printf("Area = %0.3lf\n", area);
    printf("Perimetro = %0.3lf\n", perimetro);
    return 0;
}
