#include <stdio.h>
void fazRetangulo(char c, int b, int h);


int main() {
    //Simbolo: *
    //Base: b = 5
    //Altura: h = 4
    fazRetangulo('*', 5, 4);
    return 0;
}

void fazRetangulo(char c, int b, int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < b; j++) {
            if (i == 0 || i == h - 1 || j == 0 || j == b - 1) {
                printf("%c", c);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
