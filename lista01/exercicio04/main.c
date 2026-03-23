/*
* Escreva um programa em C para ler 04 pares de valores inteiros
* e positivos, valide essa entrada. Para cada par lido deve ser
* impresso o valor do maior elemento do par ou a frase "Valores
* Iguais" quando o forem.
*/

#include <stdio.h>

int main(void) {
    int x, y;
    for (int i = 1; i <= 4; i++) {
        do {
            printf("Digite o %do) par de valor: ", i);
            scanf("%d %d", &x, &y);
        }while (!(x>0 && y>0));
        if (x == y) {
            printf("Valores Iguais..\n");
        }else if (x > y) {
            printf("X = %d eh maior que Y = %d\n", x, y);
        }else {
            printf("Y = %d eh maior que X = %d\n", y, x);
        }
    }
    return 0;
}