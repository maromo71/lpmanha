#include "calculadora.h"
#include <stdlib.h>
#include <stdio.h>

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
    if(b){
        return a / b;
    }
    printf("Não se pode dividir inteiros por ZERO\n");
    exit(1);
}

int exponenciar(int base, int potencia){
    int resultado = 1;
    for(int i = 1; i<=potencia; i++){
        resultado *= base;
    }
    return resultado;
}