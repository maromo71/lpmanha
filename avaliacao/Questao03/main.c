#include <stdio.h>

int main(void) {
    int z = 973;
    int x = 1;
    int y;
    for (y=0; y<3; y++) {
        x+= z % 10; //x = 1 e em cada passagem ele soma com o ultimo digito de n;
        printf("x=%d e Ultimo de z=%d\n", x, z%10); //coloquei essa linha so para ver como ele compoe o valor
    }
    printf("%d\n", x); //Resulta em 10, pois x=1, + 3 + 3 +3 = 10.
    return 0;
}