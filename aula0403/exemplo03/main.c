#include <stdio.h>

int main() {
    int x = 10;
    int y = 30;
    int z = 50;
    for(x = 5; y < 50; z++){
        printf("%d\n", z);
        y+=10;
    }
    return 0;
}
