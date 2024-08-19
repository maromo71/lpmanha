#include <stdio.h>
#include <math.h>
#include <time.h>
int main(void) {
    long int i;

    printf("Comecei\n");
    //gerar tempo - laco sem conteudo (;)
    for(i = 0; i < 10000000; i++);
    printf("Terminei\n");

    //laço infinito
    for (int i = 1;; ++i) {
        printf("%d\n", i);
        if(i % 3 == 0) break;
    }

    return 0;
}
