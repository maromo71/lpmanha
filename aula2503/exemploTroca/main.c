#include <stdio.h>
void trocar(int *a, int *b);
int main() {
    int a, b;
    printf("Digite o valor de a e o valor de b:\n");
    scanf("%d%d", &a, &b);
    printf("Valor de a=%d e valor de b=%d \n", a, b);
    printf("End. de a=%x e End. de b=%x \n", &a, &b);
    trocar(&a, &b);
    printf("Valor de a=%d e valor de b=%d \n", a, b);
    printf("End. de a=%x e End. de b=%x \n", &a, &b);
    return 0;
}
void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
