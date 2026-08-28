#include <stdio.h>
//calcular desconto 10% ate 100
//e acima ganha 12% de desconto
//quero como resposta o valor a pagar
int main(void) {
    double vlr_compra, vlr_pagar;
    printf("Digite o valor da compra: ");
    scanf("%lf", &vlr_compra);
    vlr_pagar = vlr_compra <= 100 ? vlr_compra * 0.9 : vlr_compra * 0.88;
    
    printf("valor a pagar: %.2lf\n", vlr_pagar);
    return 0;
}
