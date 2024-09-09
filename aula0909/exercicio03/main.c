#include <stdio.h>
int somarIntervalorDivisiveis(int a, int b, int c);
int main(void) {
    int a, b, c;
    do{
        printf("Digite um numero maior qur 1: \n");
        scanf("%d", &a);
    }while(a <=1);
    printf("Digite o valor de b: \n");
    scanf("%d", &b);
    printf("Digite o valor de c: \n");
    scanf("%d", &c);
    int resultado = somarIntervalorDivisiveis(a, b, c);
    printf("Soma do intervalo divisivel por %d = %d", a, resultado);
    return 0;
}
int somarIntervalorDivisiveis(int a, int b, int c){
    int soma = 0;
    for(int i=b; i<=c; i++){
       if(i % a == 0) soma+=i; //soma só se for divisivel por a
    }
    return soma;

}
