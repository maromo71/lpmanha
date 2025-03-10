#include <stdio.h>

int main(void) {
    printf("Conversao de Farhenheit para Celsius\n");
    printf("Escala de 0 a 100 Farhenheit\n");
    printf("E as respectivas temperaturas em Celsius\n");
    for (int fah = 0 ; fah<=100; fah++){
      double celsius = (fah - 32) * 1.8;
      printf("%d\t%.2f\n", fah, celsius);
    }
    return 0;
}