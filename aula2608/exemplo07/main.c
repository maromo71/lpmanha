#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[21];
    printf("Digite uma palavra: \n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strlen(palavra)-1] = '\0';

    for (int i = 0; i < strlen(palavra); ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%c ", palavra[j] );
        }
        printf("\n");
    }
    return 0;
}
