#include <stdio.h>
/*Avaliando desempenho acadêmico
Enunciado: Desenvolva um programa que leia a nota final
de um aluno (de 0 a 100) e determine sua classificação:
• Abaixo de 40: Reprovado
• 40 a 59: Suficiente
• 60 a 79: Bom
• 80 a 89: Muito Bom
• 90 a 100: Excelente
Use a estrutura if-else para determinar a classificação.
 */
int main(void) {
    int nota;
    printf("Digite a nota do aluno de 0..100: \n");
    scanf("%d", &nota);
    if (nota <= 40) {
        printf("REPROVADO \n");
    } else if (nota <= 79) {
        printf("Resultado: BOM\n");
    } else if (nota <= 89) {
        printf("Resultado: MUITO BOM\n");
    } else if (nota <= 100) {
        printf("Resultado: EXCELENTE\n");
    } else {
        printf("Nota Invalida\n");
    }
    return 0;
}
