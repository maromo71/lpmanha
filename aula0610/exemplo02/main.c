#include <stdio.h>
void trocar(int *a, int *b);

int main(void) {
    int a, b, resultado;
    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    trocar(&a, &b);
    printf("\n\n");
    printf("Valor de a: %d \n", a);
    printf("Valor de b: %d \n", b);
    return 0;
}

void trocar(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;

}