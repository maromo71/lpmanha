#include <stdio.h>
/**
* Programa soma todos os pares entrados
ignora os numeros impares. Termina quando a soma
ultrapassa 500
*/
int main(void) {
    int soma = 0;
    int num;
    int cont = 0;
    while (soma<=500){
      printf("Digite um valor: ");
      scanf("%d", &num);
      if (num % 2 == 1) continue;
      soma+= num;
      cont++;
    }
    printf("Somamos %d pares e obtemos %d\n", cont, soma);
    return 0;
}