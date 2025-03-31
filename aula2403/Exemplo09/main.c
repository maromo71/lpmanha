#include <stdio.h>
#include <stdlib.h>

#include <string.h>
int main(void) {
    fflush(stdin);
    char buffer[] = "12.12";

    double x = 0;

    x = atof(buffer);
    printf("Valor %lf \n", x);
    return 0;
}