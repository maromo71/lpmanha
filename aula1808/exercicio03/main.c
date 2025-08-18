#include <stdio.h>

int main(void)
{
    char l1, l2;
    printf("Digite duas letras: \n");
    l1 = getchar();
    l2 = getchar();
    printf("Foram digitadas \"%c\" e \"%c\" \n", l1, l2);
    return 0;
}