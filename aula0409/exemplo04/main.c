#include <stdio.h>

int main(void) {
    for (int i =10; i>0; i--) {
        printf("%d\n", i);
        for (int i=0; i<200000000; i++);
    }
    printf("Fogo  \a \n");
    return 0;
}
