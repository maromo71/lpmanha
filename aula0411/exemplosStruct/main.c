#include <stdio.h>
struct Produto {
    int codigo;
    char descricao[51];
    double preco;
};

void imprimir(struct Produto produto);
void ler(struct Produto *p_produto);
int main(void) {
    struct Produto produto;
    ler(&produto);
    imprimir(produto);
    return 0;
}

void imprimir(struct Produto produto) {
    printf("Codigo: %d\n", produto.codigo);
    printf("Descricao: %s\n", produto.descricao);
    printf("Preco: %.2f\n", produto.preco);
}
void ler(struct Produto *p_produto) {
    printf("Digite o codigo do produto: \n");
    scanf("%d", &p_produto->codigo);
    fflush(stdin);
    printf("Digite a descricao do produto: \n");
    scanf("%[^\n]", p_produto->descricao);
    fflush(stdin);
    printf("Digite o preco do produto: \n");
    scanf("%lf", &p_produto->preco);
}