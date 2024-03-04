#include <stdio.h>

int main() {
     int soma = 0;
     int x;
     //laco principal
     do{
         //validacao de entrada
         do{
             printf("Digite o valor: \n");
             scanf("%d", &x);
         }while(x<0||x>20);
         soma+= x;
         printf("Soma Parcial: %d \n", soma);
     }while(x!=0);
     printf("Soma Total: %d \n", soma);
     return 0;
}
