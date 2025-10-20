#include <stdio.h>
int somatoria(int n);
int somatoriaSem(int n);
int somatoriaSoMod(int n);
int main(void) {
    int x = 10;
    printf("%d\n", somatoria(x));
    printf("%d\n", somatoriaSem(x));
    printf("%d\n", somatoriaSoMod(x));
    return 0;
}

int somatoria(int n) {
    if (n == 0) return 0;
    return n + somatoria(n - 1);
}
int somatoriaSem(int n) {
    if (n == 0) return 0;
    if (n % 7 !=0)
        return n + somatoriaSem(n - 1);
    else {
        return 0 + somatoriaSem(n - 1);
    }
}
int somatoriaSoMod(int n) {
    if (n == 0) return 0;
    if (n % 7 == 0) {
        return n + somatoriaSoMod(n - 1);
    }else {
        return 0 + somatoriaSoMod(n - 1);
    }
}