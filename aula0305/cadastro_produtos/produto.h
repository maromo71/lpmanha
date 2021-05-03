/*
    Programa exemplo: Cadastro de Produtos
    Versão: 1.0 Com uso de vetores e registros
*/

typedef struct produto Produto;

//Função para castrado de um produto no vetor de produtos.
void cadastrar(Produto * prod, int posicao);

//Função para imprimir na tela todos os produtos cadastrados.
void listar(Produto * prod, int tamanho);

//Função para localizar um produto, se encontrar, irá imprimir
void localizar(Produto * prod, int codigo_procurado, int tamanho);

//Função para alterar os dados de um produto cadastrado
void alterar(Produto * prod, int codigo_procurado, int tamanho);

//Funçãp para imprimir a quantidade em estoque de um produto
void imprimirQuantidade(Produto * prod, int codigo_procurado, int tamanho);
