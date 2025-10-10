#include <stdio.h>
double calcularImc(double peso, double altura);

char * statusImc(double imc);

int main(void) {
    double peso, altura, imc;
    printf("Digite o peso da pessoa: \n");
    scanf("%lf", &peso);
    printf("Digite a altura da pessoa: \n");
    scanf("%lf", &altura);
    imc = calcularImc(peso, altura);
    printf("IMC: %.2lf \n", imc);
    printf("Seu status: %s \n", statusImc(imc));
    return 0;
}

double calcularImc(double peso, double altura) {
    double imc = peso / (altura * altura);
    return imc;
}

char * statusImc(double imc) {
    if (imc < 18.5) {
        return "Abaixo do Peso";
    }
    if (imc < 25) {
        return "Peso Normal";
    }
    if (imc < 30) {
        return "Sobrepeso";
    }
    if (imc < 35) {
        return "Obesidade Grau I";
    }
    if (imc < 40) {
        return "Obesidade Grau II - severa";
    }
    return "Obesidade Grau III - morbida";

}


