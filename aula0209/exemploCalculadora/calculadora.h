/**
 * Documentação da Calculadora
 * Calculadora básica, demonstração de
 * modularidade na aula de funções do prof.
 * Maromo
 * Teremos cinco funcoes
 * somar, subtrair, multiplicar, dividir e resto
 * @since set 2024
 * @author Maromo
 */

#ifndef CALCULADORA_H
#define CALCULADORA_H


/**
 * Função somar - Soma dois valores inteiros
 * @param x primeiro valor informado
 * @param y segundo valor informado
 * @return resultado da soma dos dois valores
 */
int somar(int x, int y);

/**
 * Função subtrair - Subtrai um do outro valor
 * @param x primeiro valor informado
 * @param y segundo valor informado
 * @return resultado da subtraçao dos dois valores
 */
int subtrair(int x, int y);

int multiplicar(int x, int y);

int dividir(int x, int y);

int encontrar_resto(int x, int y);

#endif  // CALCULADORA_H