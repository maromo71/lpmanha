#include <stdio.h>

int main(void) {
    int x, y;
    printf("Digite dois valores: \n");
    scanf("%d %d", &x, &y);
    int result = 0;
    if (y!=0) { // if(y)
        result = x / y;
    }else {
        printf("Impossivel calcular\n");
        return 0;
    }
    printf("Resultado: %d\n", result);
    return 0;
}
