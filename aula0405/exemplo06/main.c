#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char buffer[] = "257324";
    float x = atof(buffer);

    printf("%.0f \n", x + 10);
    return 0;
}
