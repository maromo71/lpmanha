#include <stdio.h>
#include <string.h>
int main(void) {
    char nome1[51] = "oscar";
    char nome2[51] = "OSCAR";
    if (strcasecmp(nome1, nome2)==0) {
        printf("Sao iguais\n");
    }else {
        printf("Sao diferentes\n");
        if (strcasecmp(nome1, nome2) == -1) {
            printf("Nome 1 vem antes de Nome 2\n");
        }else {
            printf("Nome 2 vem antes de Nome 1\n");
        }
    }

    return 0;
}