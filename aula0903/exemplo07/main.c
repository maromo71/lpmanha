#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int cont = 0;
    srand(time(NULL));
    int magico = (rand() % 1000) + 1;
    while (1) {
        cont++;
        if (cont==11) {
            printf("Infelizmente ababou o jogo. Voce perdeu\n");
            printf("O numero magico eh %d \n", magico);
            break;
        }
        int palpite;
        printf("Digite o palpite [%d]: ", cont);
        scanf("%d", &palpite);

        if (palpite == magico) {
            printf("Parabens voce ganhou\n");
            break;
        }else {
            printf("Voce errou. Tente novamente\n");
            palpite > magico ? printf("Palpite Alto\n") : printf("Palpite Baixo\n");
        }
    }
    return 0;
}