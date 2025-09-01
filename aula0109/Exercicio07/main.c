#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int continua = 0;
    int vitoria = 0, derrota = 0;
    srand(time(NULL));
    printf("Jogo do Par ou Impar\n");
    do {
        int escolha, numero, computador;

        printf("---Nova Rodada---\n");
        printf("Escolha (1 - impar ou 2 - par)\n");
        scanf("%d", &escolha);
        printf("Digite seu numero: \n");
        scanf("%d", &numero);
        computador = rand() % 11;
        printf("Voce jogou %d e o computador %d \n", numero, computador);
        int soma = numero + computador;
        printf("A soma eh: %d \n", soma);

        if (escolha == 1) {
            if (soma % 2 != 0) {
                printf("Voce VENCEU!\n");
                vitoria++;
            }else {
                printf("Voce PERDEU!\n");
                derrota++;
            }
        }else {
            if (soma % 2 == 0) {
                printf("Voce VENCEU!\n");
                vitoria++;
            }else {
                printf("Voce PERDEU!\n");
                derrota++;
            }
        }
        printf("Placar %d Vitorias e %d Derrotas\n", vitoria, derrota);
        printf("Deseja continuar ? [1 Sim, 2 Nao ]\n");
        scanf("%d", &continua);
    } while (continua == 1);
    printf("Fim de Jogo \n");
    return 0;
}
