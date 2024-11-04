#define MAX 100
typedef struct Aluno {
    char nome[81];
    int matricula;
    char endereco[121];
    char telefone[21];
    double nota;
} aluno;

typedef aluno *p_aluno;

extern p_aluno v[MAX];


/**
 * Função inicializa - responsavel por atribuir NULL a todas
 * as posicoes do vetor v;
 */
void inicializa();

/**
 * Função para ler os dados a partir do console
 * @param pos Posicao do vetor v que receberá as informações lidas
 */
void ler_dados(int pos);

/**
 * Imprimir apenas um dados
 * @param pos Posicao do vetor v que será impressa no console
 */
void imprimir_unico(int pos);

/**
 * Imprimir todos os dados do vetor que estejam preenchidos
 */
void imprimir();