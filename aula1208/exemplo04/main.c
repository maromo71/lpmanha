#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, r, opc;
    printf("Digite dois valores inteiros \n");
    scanf("%d%d", &a, &b);
    //montar o menu
    printf("\t\t\tMenu de Operações\n");
    printf("\t\t\t1.. Somar\n");
    printf("\t\t\t2.. Subtrair\n");
    printf("\t\t\t3.. Multiplicar\n");
    printf("\t\t\t4.. Dividir\n");
    printf("\t\t\tSua opção: ");
    scanf("%d", &opc);
    switch (opc) {
        case 1:
            r = a + b;
            break;
        case 2:
            r = a - b;
            break;
        case 3:
            r = a * b;
            break;
        case 4:
            if(b){
                r = a / b;
                break;
            }else{
                printf("Impossível dividir por 0.\n");
                exit(1);
            }
        default:
            printf("Opcao inválida. Fim\n");
            exit(2);
    }
    printf("Resultado: %d \n", r);
    return 0;
}
