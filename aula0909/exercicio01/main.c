#include <stdio.h>
//protótipo
int verPositividade(int valor);

//main
int main(void) {
    int valor;
    printf("Digite um valor: \n");
    scanf("%d", &valor);
    int resultado = verPositividade(valor);
    printf("Resultado: %d \n", resultado);
    return 0;
}
//função
int verPositividade(int valor){
    if(valor==0) return 0;
    if(valor<0) return -1;
    return 1;
}
