#include <stdio.h>

int main(void) {
    char a, b;
    printf("Digite uma letra: \n");
    //scanf("%c", &a);
    a = getchar();
    printf("Digite outra letra: \n");
    fflush(stdin);
    //scanf("%c", &b);
    b = getchar();
    printf("Letras digitadas: %c, %c\n", a, b);
    return 0;
}
