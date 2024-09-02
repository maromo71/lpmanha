#include <stdio.h>
double imc(double peso, double altura);

int main(void) {
    double peso_input, altura_input;
    double resultado;
    printf("Digite seu peso. Ex: '104.5':\n");
    scanf("%lf", &peso_input);
    printf("Digite sua altura. Ex: '1.78': \n");
    scanf("%lf", &altura_input);
    resultado = imc(peso_input, altura_input);
    printf("Resultado, seu imc: %.2lf\n", resultado);
    return 0;
}

double imc(double peso, double altura){
    return peso / (altura * altura);
}
