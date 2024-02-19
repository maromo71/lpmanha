#include <stdio.h>
int valor = 100;
void imprimir(int valor){
    printf("Valor +1:  %d \n", ++valor);
}
void imprimir_novo(){
    printf("%d\n", valor);
}
int somar(int a, int valor){
    return a + valor;
}
int main() {
    int valor = 30;
    printf("Operacoes\n");
    imprimir(30);
    int r = somar(valor, 10);
    printf("Mostrar r: %d \n", r);
    imprimir_novo();
    return 0;
}
