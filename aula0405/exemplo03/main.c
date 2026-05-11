#include <stdio.h>
#include <string.h>
int main(void) {
    char nome[] = "MARCOS";
    char sobrenome[] = "MORAES";
    char nome_completo[255];

    strcpy(nome_completo, nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome);

    puts(nome_completo);
    return 0;
}
