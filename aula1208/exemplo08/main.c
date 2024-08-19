#include <stdio.h>

int main(void) {
    //exemplo do continue
    for (int i = 0; i < 100; ++i) {
        //imprimir todos menos os pares,
        // e os divisiveis exatos por 3
        if(i % 2==0 || i % 3==0) continue;
        printf("%d\n", i);
    }
    return 0;
}
