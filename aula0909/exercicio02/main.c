#include <stdio.h>
int somarIntervalo(int n1, int n2);
int main(void) {
    int a, b;
    printf("Digite o inicio do intervalo\n");
    scanf("%d", &a);
    printf("Digite o fim do intervalo\n");
    scanf("%d", &b);
    int resultado = somarIntervalo(a, b);
    printf("Soma do intervalo de %d a %d = %d", +
        a+1, b-1, resultado);
    return 0;
}

int somarIntervalo(int n1, int n2){
    int soma = 0;
    for(int i=n1+1; i<n2; i++){
        soma+=i;
    }
    return soma;
}
