#include <stdio.h>

int main(void) {
    int first = 0;
    int second = 1;
    int third = 1;
    int next = 0;
    int num;
    printf("Digite o eNezimo termo desejado: \n ");
    scanf("%d", &num);
    if (num <= 4) {
        printf("Deve ser do quarto em diante\n");
        return 0;
    }
    for (int i = 4; i <= num; i++) {
        next = first + second + third;
        first = second;
        second = third;
        third = next;
    }
    printf("O enezimo termo eh: %d \n", next);
    return 0;
}