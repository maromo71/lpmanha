#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//proxima aula - repeticao
int main(){
    srand(time(NULL));
    int palpite, magico;
    magico = rand() % 100;
    int cont = 0;
    do{
        printf("Digite seu palpite:  \n");
        scanf("%d", &palpite);
        if (magico == palpite){
            printf("Voce acertou, parabens!!! \n");
            printf("Passe no caixa e pegue a grana \n");
        }else{
            printf("Voce errou\n");
            if(palpite > magico){
                printf("Numero digitado muito alto \n");
            }else{
                printf("Numero digitado muito baixo \n");
            }
        }
        cont++;
    }while(palpite != magico);
    printf("Voce acertou em %d tentativas \n", cont);
    printf("Fim do programa \n");
    return 0;
}
