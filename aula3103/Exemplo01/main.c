#include <stdio.h>
#include <stdlib.h> //biblioteca padrao de C
#include <string.h>
int main(void) {
    char buffer[100];
    printf("Digite um numero inteiro: \n");
    gets(buffer);
    int x = atoi(buffer);
    x *= 2;
    printf("2 X o valor que vc digitou: %d \n", x);
    char buf2[100] = "12 89.5 15";
    int valor1, valor3;
    double valor2;
    sscanf(buf2, "%d %lf %d", &valor1, &valor2, &valor3);



    return 0;
}