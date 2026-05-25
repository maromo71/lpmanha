/**
 * Definição do tipo abstratato de dados (TAD)
 * chamado aluno.
 * */
#define MAX 10000

/** Tipo de dado definido pelo usuario
 *  chamado aluno
 */
typedef struct Aluno {
    char nome[81];
    int matricula;
    char endereco[121];
    char telefone[21];
    double nota;
}aluno;
/** Tipo de dado que refere-se ao ponteiro
 * para um aluno
 */
typedef aluno *p_aluno;
/* Tornando o ponteiro p_aluno um vetor
 * global de ate 10000 alunos MAX
 * */
extern p_aluno vetor[MAX];

void iniciar_vetor();

void inserir_aluno();

void imprimir_aluno(int pos); //imprimir o aluno da posicao desejada

void imprimir_todos(); //imprimir os alunos cadastrados no momento

void alterar_aluno();

void procurar_aluno();

void ler_dados(int pos);
