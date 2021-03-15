#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[] = "Oscar";
    char sobrenome[] = "Silva";
    char nomecompleto[51] = {0};
    strcat(nomecompleto, nome);
    strcat(nomecompleto, " ");
    strcat(nomecompleto, sobrenome);

    printf("Nome completo: %s \n",nomecompleto);

    return 0;
}
