#include <stdio.h>
/**
 * Escreva um programa em C para ler 04 pares de valores inteiros e positivos,
 * valide essa entrada. Para cada par lido deve ser impresso o valor do maior
 * elemento do par ou a frase "Valores Iguais" quando o forem.
 *
 */
int main(void) {
    //quatro pares de valores validados
    for (int i = 0; i < 4; i++) {
        //para cada par
        int x, y;
        do{
            printf("%do) conjunto de pares\n", i+1);
            printf("======================\n");
            printf("Entre com primeiro valor inteiro:\n");
            scanf("%d", &x);
            printf("Entre com segundo valor inteiro:\n");
            scanf("%d", &y);
        }while(x<=0 || y<=0);
        if(x > y){
            printf("Maior valor do par é: %d \n", x);
        } else if(x < y){
            printf("Maior valor do par é: %d \n", y);
        } else{
            printf("Valores são iguais \n");
        }
    }
    return 0;
}
