#include <stdio.h>
#include <stdlib.h>
/*
Fa?a um programa que dados X n?meros pelo usu?rio
onde [ 0<=n<=20 ], apresente a somat?ria dos n?meros
que atendem este crit?rio.
Usamos um encadeamento de la?os (for e o do..while)
*/
int main()
{
    int x, n;
    int somatoria = 0;
    printf("Digite a quantidade de elementos a serem entrados: \n");
    scanf("%d", &x);
    for(int i = 1; i <= x; i++){
        printf("Elemento %d \n", i);
        do{
            printf("Digite um numero: \n");
            scanf("%d", &n);
        }while(n<0 || n>20);
        somatoria = somatoria + n;
    }
    printf("A somatoria eh: %d \n", somatoria);
    return 0;
}
