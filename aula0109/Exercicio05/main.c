#include <stdio.h>

int main(void) {
    int num;
    do {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num <=0) printf("Valor invalido. Ignorado\n");
    }while (num <= 0);
    //algoritmo para inverter o numero
    //supondo que numero seja 123
    //resultado tem que ser 321
    int reverso = 0;
    do {
        int resto = num % 10;
        reverso = (reverso * 10) + resto;
        num = num / 10;
    }while (num != 0);
    printf("Numero invertido: %d\n", reverso);
    return 0;
}