#include <stdio.h>

int main(void) {
    int numAtletas, peso, maiorPeso=0;
    do {
        printf("Digite o numero de competidores: \n");
        scanf("%d", &numAtletas);
        if (numAtletas<=0) printf("Num de Atletas invalido \n");
    }while (numAtletas<=0);

    for (int i=0; i<numAtletas; i++) {
        do {
            printf("Digite o peso do competido: \n");
            scanf("%d", &peso);
            if (peso<=0) printf("Peso invalido \n");
        }while (peso <0);

        if (peso > maiorPeso) {
            maiorPeso = peso;
        }
        printf("O maior peso levantado na competicao: %d \n", maiorPeso);
    }
    return 0;
}