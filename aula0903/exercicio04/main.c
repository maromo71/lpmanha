#include <stdio.h>

int main(void) {
    int hora;
    printf("Digite uma hora [0..23]\n");
    scanf("%d", &hora);
    hora >= 5 && hora <= 11
        ? printf("manha\n")
        : hora >= 12 && hora <= 17
              ? printf("tarde")
              : hora >= 18 && hora <= 22
                    ? printf("noite\n")
                    : printf("madrugada\n");
    return 0;
}
