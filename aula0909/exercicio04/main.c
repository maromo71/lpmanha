#include <stdio.h>
float calcularMedia(float nota1, float nota2, float nota3, char s);
int main(void) {
    float nota1, nota2, nota3;
    char s;
    printf("Digite a nota 1 \n");
    scanf("%f", &nota1);
    printf("Digite a nota 2 \n");
    scanf("%f", &nota2);
    printf("Digite a nota 3 \n");
    scanf("%f", &nota3);
    fflush(stdin);
    printf("Digite 'a' para média arimetica ou 'p' ponderada\n" );
    s = getchar();
    float resultado = calcularMedia(nota1, nota2, nota3, s);
    printf("Média final do aluno: %.2f\n", resultado);
    return 0;
}
float calcularMedia(float nota1, float nota2, float nota3, char s){
    float media=0.0;
    if(s=='A' || s=='a'){
        //media aritmetica
        media = (nota1 + nota2 + nota3)/ 3;
    }else{
        //media ponderada
        media = (nota1 * 2 + nota2 * 4 + nota3 * 5) / 11;
    }
    return media;
}
