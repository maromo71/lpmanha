#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415
#include "calculadora.h"



float calcularArea(float raio){
    return   PI * pow(raio, 2.0);
}
int somar(int a, int b){
    return a + b;
}


int subtrair(int a, int b){
    return a - b;
}


int multiplicar(int a, int b){
    return a * b;
}


int dividir(int a, int b){
    if(b!=0){
        return a / b;
    }
    //forcar um erro
    printf("Aconteceu o erro: Não pode dividir número inteiro por zero \n");
    exit(1);
}
