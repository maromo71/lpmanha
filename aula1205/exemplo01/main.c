#include <stdio.h>
//prótipo da funcao
double media(int a, int b, int c);

int main(void) {
    int num1, num2, num3;
    printf("Digite tres valores inteiros: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("Media dos valores %.2lf \n", media(num1, num2, num3));
    return 0;
}

//funcao completa
double media(int a, int b, int c){
    return (a + b + c) / 3.0;
}

