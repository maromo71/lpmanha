#include <stdio.h>
//Tabuada personalizada de T até L
int main(void) {
    int t, l;
    printf("Digite a tabuada desejada: \n");
    scanf("%d", &t);
    printf("Digite o limite maximo: \n");
    scanf("%d", &l);
    for (int i=1; i<=l; i++) {
        printf("%d X %d = %d \n",t, i,  t*i);
    }
    return 0;
}
