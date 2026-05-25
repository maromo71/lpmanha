#include <stdio.h>
#include "pessoa.h"

int main(void) {
    struct Produto produto; //variavel chamada produto do tipo struct Produto
    ler(&produto);
    imprimir(produto);
    return 0;
}

