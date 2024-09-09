#include <stdio.h>
float calcularMedia(float n1, float n2, float n3, int p1, int p2, int p3);
int main(void) {
    float n1, n2, n3;
    int p1, p2, p3;
    printf("Digite 03 notas de aluno: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    printf("Digite 03 pesos para notas: \n");
    scanf("%d%d%d", &p1, &p2, &p3);
    float resultado = calcularMedia(n1, n2, n3, p1, p2,p3);
    printf("Média ponderada: %.2f \n", resultado);
    return 0;
}
float calcularMedia(float n1, float n2, float n3, int p1, int p2, int p3){
    float media = (n1 * (float)p1 + n2 * (float)p2 + n3 * (float)p3) / (float)(p1+p2+p3);
    return media;
}
