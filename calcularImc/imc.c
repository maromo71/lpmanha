#include <stdio.h>
#include <stdlib.h>
/*
 Função imc, calcula o indice de massa corporea de
 uma pessoa. Recebe como parâmetros o peso e altura
 e devolve o retultado.
*/
float imc(float peso, float altura);

int main()
{
    float peso, altura, resultado;
    printf("Digite o peso da pessoa: \n");
    scanf("%f", &peso);
    printf("Digite a altura da pessoa: \n");
    scanf("%f", &altura);
    resultado = imc(peso, altura);
    printf("Imc da pessoa é:  %f  \n", resultado);
    return 0;
}

float imc(float peso, float altura){
    return peso / (altura * altura);
}
