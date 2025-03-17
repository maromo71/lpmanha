#include <stdio.h>

int main(void) {
    double tabu[64] = {1};
    double total = 1;
    printf("Posicao 1: %.0lf\n", tabu[0]);
    for (int i=1; i<64; i++){
      tabu[i] = tabu[i-1] * 2;
      total+=tabu[i];
      printf("Posicao %d: %.0lf\n", i+1, tabu[i]);
    }
    printf("Total geral: %.0lf\n", total);
    return 0;
}