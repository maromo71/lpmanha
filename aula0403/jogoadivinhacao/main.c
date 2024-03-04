#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int total = 0; //total de palpites (limitado a 10)
    int magico = (rand() % 1000) + 1; //entre 1 e 1000
    int palpite;
    while (1) {
        printf("Digite o palpite de num: %d \n", ++total);
        scanf("%d", &palpite);
        //verificar se acertou ou não.
        if (palpite == magico) {
            printf("Parabéns. Você venceu\n");
            return 0;
        }
        if (total == 10) {
            printf("Suas tentativas acabaram. Dançou!!\n");
            return 0;
        }
        palpite < magico ?
        printf("Seu palpite foi baixo.. Continue.\n") :
        printf("Seu palpite foi alto.. Continue.\n");
    }

}
