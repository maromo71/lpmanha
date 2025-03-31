#include <stdio.h>

int main(void) {
    char pri_nome[16];
    char ult_nome[16];
    char completo[32] = {0};
    fflush(stdin); //limpa buffer
    printf("Digite o primeiro nome: ");
    gets(pri_nome);

    fflush(stdin); //limpa buffer
    printf("Digite o sobrenome: ");
    gets(ult_nome);
    strcat(completo, pri_nome);
    strcat(completo, " ");
    strcat(completo, ult_nome);



    printf("Nome completo: %s", completo);


    return 0;
}