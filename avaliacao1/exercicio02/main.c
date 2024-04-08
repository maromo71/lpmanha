#include <stdio.h>
//Resultado (15)
int execFunc(int a);
int main() {
    int x;
    printf("Digite o valor de x: \n");
    scanf("%d", &x);
    printf("Resultado impresso: %d \n", execFunc(x));
    return 0;
}
int execFunc(int a){
    int b= 1, c = 0, d;
    for(d = 0; d < a; d++){
        c+= b;
        b++;
    }
    return c;
}
