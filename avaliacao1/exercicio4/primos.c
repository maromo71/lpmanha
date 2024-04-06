#include "primos.h"

#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
// Criada por Maromo - 06 Abril
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Função para imprimir todos os números
// primos no intervalo [start, end]
void printPrimesBetween(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
}
