#include <stdio.h>

int main(void) {
    int tempo;
    printf("Digite o tempo para a decolagem: ");
    scanf("%d", &tempo);
    for (int i = tempo; i >=0; i--) {
        printf("%d segundos... \n", i);
    }
    printf("decolagem!..");
    return 0;
}
