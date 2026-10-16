#include <stdio.h>

//prototype
double calcularImc(double peso, double altura);
char* classificarImc(double imc);

int main(void) {
    double peso, altura;
    printf("Digite o seu peso: ");
    scanf("%lf", &peso);
    printf("Digite a altura: ");
    scanf("%lf", &altura);
    //a variavel resultado, recebe o resultado da chamada da funcao calcularImc
    double resultado = calcularImc(peso, altura)
    printf("Seu imc: %lf\n", resultado);
    //mostrar a classificacao
    printf("Sua classificao eh: %s \n", classificarImc(resultado));
    return 0;
}

double calcularImc(double peso, double altura) {
    return peso / (altura * altura);
}
char* classificarImc(double imc) {
    if (imc < 18.5) {
        return "Abaixo do peso normal.";
    }else if (imc < 25) {
        return "Peso normal.";
    }else if (imc < 30) {
        return "Excesso de peso.";
    }else if (imc < 35) {
        return "Obesidade Classe I.";
    }else if (imc < 40) {
        return "Obesidade Classe II.";
    }else {
        return "Obesidade Classe III.";
    }
}
