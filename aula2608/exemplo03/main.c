#include <stdio.h>
#define T 5
int main(void) {
    //vetor de 10 valores inteiros
    int nums[T] = {0};
    //receber os dados do usuario
    for (int i = 0; i < T; ++i) {
        printf("Digite um valor: \n");
        scanf("%d", &nums[i]);
    }
    //encontrar o maior valor
    int maior = nums[0]; //receber o primeiro valor
    //percorrer novamente para verificar se ha maior
    for (int i = 1; i < T; ++i) {
        if(maior < nums[i]) maior = nums[i]; //recebe o maior
    }
    int contar_maior = 0;
    //percorrer para contar o numero de vezes que o maior aparece
    for (int i = 0; i < T; ++i) {
        if(maior==nums[i]) contar_maior++;
    }
    int contar_par =0;
    //percorrer para o contar a quantidade de numeros pares
    for (int i = 0; i < T; ++i) {
        if(nums[i] % 2 == 0) contar_par++;
    }
    //apresentar os dez dados
    for (int i = 0; i < T; ++i) {
        printf("[%3d] ", nums[i]);
    }
    printf("\n");
    printf("Maior valor ============================> %3d \n", maior);
    printf("Num. de ocorrencias do maior valod =====> %3d \n", contar_maior);
    printf("Quantidade de números pares entrados====> %3d \n", contar_par);
    return 0;
}
