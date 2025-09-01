#include <stdio.h>

int main(void) {
    int nivel;
    while (1) { //laco infinito
        do {
            printf("Informe o nivel de umidade: \n");
            scanf("%d", &nivel);
            if (nivel == 999) {
                printf("Analise finalizada.\n");
                return 0;
            }
            if (nivel < 0 || nivel > 100) {
                printf("Valor invalido. Desconsiderado. \n");
            }
        }while(nivel < 0 || nivel > 100);
        if (nivel <= 30) {
            printf("Solo seco. Regar imediatamente.\n");
        }else if (nivel <= 70) {
            printf("Umidade ideal.\n");
        }else  {
            printf("Solo encharcado. Drenagem necessaria.\n");
        }
    };
    return 0;
}