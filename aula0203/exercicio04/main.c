#include <stdio.h>

int main(void) {
    int horas;
    printf("Digite a horas em inteiro: [0..23] \n");
    scanf("%d", &horas);
    horas == 23 || horas <= 4 ? printf("Madrugada\n") : horas <= 11 ? printf("Manha\n") : horas <=17 ? printf("Tarde\n") : printf("Noite\n");
    return 0;
}