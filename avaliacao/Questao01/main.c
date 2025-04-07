#include <stdio.h>

int main(void) {
    int n;
    int somapar=0;
    int cont = 0;
    do{
        do {
            printf("Digite um valor: ");
            scanf("%d", &n);
        }while (n<1 || n>99); //validando a entrada
        if (n%2==0) somapar+= n; //somando os pares
        cont++; //contando os validos
    }while (cont < 10);
    printf("Soma: %d \n", somapar);
    return 0;
}