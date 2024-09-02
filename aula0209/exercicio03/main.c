#include <stdio.h>
#include "inversor.h"
int main(void) {
    char palavra[21] = {'\0'};

    printf("Digite uma palavra: \n");
    fgets(palavra, sizeof(palavra), stdin);

    inverterString(palavra);

    printf("Invertido: %s \n", palavra);

    return 0;
}
