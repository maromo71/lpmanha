#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[] = { 101, 102, 103, 104, 105 };
    int *p1, *p2;
    int i = 100;
    p1 = &vetor[2];
    printf("%d\n", *p1);
    p2 = &i;
    printf("%d\n", *p2);
    p2 = p1;
    printf("%d\n", *p2);
    return 0;
}
