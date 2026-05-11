
#include "somatoria.h"
/**
 * @brief Implementação da função recursiva de somatória.
 *
 * A função utiliza recursividade para calcular a soma
 * de números pares válidos até chegar ao caso base.
 *
 * Regras:
 * - Ignora números ímpares.
 * - Ignora números terminados em 0.
 * - Soma apenas pares que não terminam em 0.
 *
 * @param n Valor atual da recursão.
 * @return int Soma acumulada.
 */
int soma(int n) {
    // Caso base da recursão
    if (n == 0)
        return 0;
    // Se for ímpar, ignora o número
    if (n % 2 == 1) {
        return soma(n - 1);
    }
    // Se terminar em 0, ignora o número
    else if (n % 10 == 0) {
        return soma(n - 2);
    }
    // Soma números pares válidos
    else {
        return n + soma(n - 2);
    }
}