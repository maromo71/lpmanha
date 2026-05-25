/**
* struct Produto - a Entidade que representa um produto cadastrado
 */
struct Produto {
    int codigo; //codigo do produto
    char descricao[51]; // descricao do produto
    int quantidade; //quantidade em estoque
    double valor; //valor em Reais do produto
};

/**
 *
 * @param produto Refere-se ao produto a ser impresso
 */
void imprimir(struct Produto produto);

/**
 *
 * @param produto Refere-se a referencia de memoria que será
 * preenchida (lida do teclado)
 */
void ler(struct Produto * produto);

