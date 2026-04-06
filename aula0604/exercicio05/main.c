#include <stdio.h>

int main(void) {
    int vetor[10];
    int numero, pos_encontrada = -1; //flag colocar uma posicao que nao exista
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero para o vetor: ");
        scanf("%d", &vetor[i]);
    }
    //Pedir o numero X desejado
    printf("Digite o numero a ser encontrado: \n");
    scanf("%d", &numero);
    //Varrer o vetor a procura do numero desejado
    for (int i=0; i<10; i++) {
        if (numero == vetor[i]) {
            pos_encontrada = i;
            break;//encontrou nao tem porque continuar procurando
        }
    }
    if (pos_encontrada != -1) {
        printf("Valor encontrado na posicao: %d\n", pos_encontrada);
    }else {
        printf("Valor nao encontrado \n");
    }
    return 0;
}
