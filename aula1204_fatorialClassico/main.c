#include <stdio.h>
#include <stdlib.h>
int fatorial(int n);
int main()
{
    int numero;
    printf("Digite o número que deseja saber o fatorial: \n");
    scanf("%d", &numero);
    int resultado = fatorial(numero);
    printf("Fatorial do %d = %d \n", numero, resultado);
    return 0;
}

int fatorial(int n){
    int f = 1;
    for(int i=n; i>=1; i--){
        f = f * i;
    }
    return f;
}
