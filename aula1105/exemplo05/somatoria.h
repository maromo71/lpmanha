/**
* @brief Calcula a somatória recursiva de números pares.
 *
 * A função realiza uma soma recursiva considerando apenas
 * determinados números pares, seguindo as regras:
 *
 * - Se n == 0, retorna 0 (caso base).
 * - Se n for ímpar, ignora o número e chama soma(n - 1).
 * - Se n terminar com 0, ignora o número e chama soma(n - 2).
 * - Caso contrário, soma o valor atual com soma(n - 2).
 *
 * Exemplo:
 * Entrada: 8
 * Processamento:
 * 8 + 6 + 4 + 2 + 0
 * Resultado: 20
 *
 * @param n Número inteiro maior ou igual a zero.
 * @return int Resultado da somatória recursiva.
 */
int soma(int n);
