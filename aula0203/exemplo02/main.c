#include <stdio.h>

int main(void) {
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    //vamos para comparacoes
    if (idade <= 5) {
        printf("Nao participa \n");
    } else {
        if (idade <=10) {
            printf("Cat. Infantil\n");
        } else {
            if (idade <= 17) {
                printf("Cat. Juvenil\n");
            }else {
                printf("Cat. Adulto\n");
            }
        }
    }
    return 0;
}