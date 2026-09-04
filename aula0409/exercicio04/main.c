#include <stdio.h>
//Monitor de Temperatura em Estufa
int main(void) {
    double maior, menor, temperatura;
    //receber as 12 temperaturas ao longo do dia
    //registrar a maior e a menor delas
    for (int i=1; i<=12; i++) { //para 12 leituras
        printf("Digite a %d) leitura: \n", i);
        scanf("%lf", &temperatura);
        if (i==1) {
            maior = temperatura;
            menor = temperatura;
        }
        if (temperatura > maior) maior = temperatura;
        if (temperatura < menor) menor = temperatura;
    }
    printf("Maior temperatura: %.2lf\n", maior);
    printf("Menor temperatura: %.2lf\n", menor);
    return 0;
}
