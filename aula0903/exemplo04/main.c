#include <stdio.h>

int main(void) {
    //posso mas nao devo criar um laco sem fim (loop infinito)
    for (int i=1;;i++) {
        printf("%d ", i);
        if ( (i + 7897) % 111 == 0 ){
            break; //forca a parada - o problema eh se nunca entrar aqui
        }
    }
    return 0;
}