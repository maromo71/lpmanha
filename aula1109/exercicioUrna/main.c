#include <stdio.h>
//Apurar o % de votos de todos os candidatos, de
//nulos e brancos. [C1, C2, Nulo, Branco].
//Urna com TVotos - ? (Total de votos na urna)
int main(void) {
    int total_C1 = 0, total_C2 = 0, total_B = 0, total_N = 0;
    int TVotos = 0, voto=0;
    printf("Digite o total de votos na urna: \n");
    scanf("%d", &TVotos);
    for (int i=1; i<=TVotos; i++) {
        printf("|||||| ====== ESCOLHA O CANDIDATO ====== ||||||\n");
        printf("|||||| 1) --> Candidato 1\n");
        printf("|||||| 2) --> Candidato 2\n");
        printf("|||||| 3) --> Branco \n");
        printf("|||||| 4) --> Nulo \n");
        printf("=========== DIGITE SUA OPCAO: \n");
        scanf("%d", &voto);
        switch (voto) {
            case 1:
                total_C1++;
                break;
            case 2:
                total_C2++;
                break;
            case 3:
                total_B++;
                break;
            default:
                total_N++;
        }
        printf("Voto computado com sucesso!\n");
    }//acaba o for
    printf("Candidato 1, percentual de votos: %.2lf%% \n", ((double)total_C1 / TVotos) * 100);
    printf("Candidato 2, percentual de votos: %.2lf%% \n", ((double)total_C2 / TVotos) * 100);
    printf("Votos Brancos, percentual de votos: %.2lf%% \n", ((double)total_B / TVotos) * 100);
    printf("Votos Nulos, percentual de votos: %.2lf%% \n", ((double)total_N / TVotos) * 100);
    if (total_C1 > total_C2) {
        printf("Candidato 1 foi eleito com a maioria simples dos votos\n");
    }else if (total_C2 > total_C1) {
        printf("Candidato 2 foi eleito com a maioria simples dos votos\n");
    }else {
        printf("Nao houve vencedor no pleito. Empatados \n");
    }
    return 0;
}
