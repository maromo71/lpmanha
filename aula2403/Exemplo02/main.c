#include <stdio.h>

int main(void) {
    char pri_nome[16];
    char ult_nome[16];
    char completo[32];
    fflush(stdin); //limpa buffer
    printf("Digite o primiero nome: ");
    gets(pri_nome);

    fflush(stdin); //limpa buffer
    printf("Digite o sobrenome: ");
    gets(ult_nome);

    int pos=0;
    for (int i=0; i<16; i++){
      if (pri_nome[i]=='\0') break;
      completo[pos] = pri_nome[i];
      pos++;
    }
    completo[pos] = ' ';
    pos++;
    for (int i=0; i<16; i++){
      if (ult_nome[i]=='\0') {
        completo[pos] == '\0';
        break;
      }
      completo[pos] = ult_nome[i];
      pos++;
    }
    completo[pos] = '\0';
    printf("Nome completo: %s", completo);


    return 0;
}