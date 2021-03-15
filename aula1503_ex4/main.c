#include <stdio.h>
#include <stdlib.h>
/* Dado um vetor com 100 posicões. Gostaria de preencher até que o usuário entrasse
com um valor = -9.
*/

int main()
{
    int vetor[100]; //Limite máximo do vetor
    int cont = 0;
    do{
        printf("Digite um valor, ou [-9] para encerrar: \n");
        scanf("%d", &vetor[cont]);
        cont++;
    }while(vetor[cont - 1]!= -9 && cont != 10);
    printf("Quantos dados foram digitados: \n");
    printf("Resultado: %d \n", cont);
    //exibir os dados entrados pelo usuario
    for(int i =0; i<cont; i++){
        printf("Valor do vetor[%d] ===> %d \n", i, vetor[i]);
    }
    return 0;
}
