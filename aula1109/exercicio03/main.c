#include <stdio.h>
//V = aporte inicial (dinheiro que voce depositou) (?)
//J = taxa de juros anual (?)
//N = periodo de N anos (?)
int main(void) {
    double V, J;
    int N;
    printf("Digite o valor do aporte inicial em R$ \n");
    scanf("%lf", &V);
    printf("Digite a taxa de juros anual: \n");
    scanf("%lf", &J);
    printf("Digite o numeros de anos da aplicacao: \n");
    scanf("%d", &N);
    for (int i=1; i<=N; i++) {
        double R = V * (J / 100);
        V = V + R;
        printf("Ano: %d | Redimento: %8.2lf | Montante: %8.2lf |\n", i, R, V);
    }
    return 0;
}
