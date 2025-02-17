#include <stdio.h>

int main(void) {
    char a, b;
    fflush(stdin);
    printf("Digite uma letra para a: ");
    scanf("%c", &a);
    fflush(stdin);
    printf("Digite uma letra para b: ");
    scanf("%c", &b);
    printf("a = %c\nb = %c\n", a, b);
    return 0;
}