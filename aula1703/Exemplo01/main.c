#include <stdio.h>

int main(void) {
    int valor[10] = {0};
    int soma=0, maior=0, menor;
    float media;
    for (int i=0; i<10; i++){
       printf("valor[%d] = [%d]\n",i, valor[i]);
    }
    printf("Entrada de dados \n");
    for (int i=0; i<10; i++){
        printf("Digite um valor: \n");
        scanf("%d", &valor[i]);
        soma+=valor[i];
    }
    media =  valor / 10;
    //encontrar o maior e o menor
    maior = valor[0];
    menor = valor[0];
    for (int i=1; i<10; i++) {
        if (maior < valor[i]) maior = valor[i];
        if (menor > valor[i]) menor = valor[i];
    }
    printf("Maior valor: %d\nMenor valor: %d\nMedia: %.2f\n",maior,menor,media);
    return 0;
}