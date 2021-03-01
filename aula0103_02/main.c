#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario;
    char sexo;
    printf("Digite o salario atual \n");
    scanf("%lf", &salario);
    fflush(stdin);
    printf("Digite 'f' para feminino ou 'm' para masculino: \n");
    sexo = getchar();
    salario *= (sexo == 'f' || sexo=='F') ? 1.11 : 1.10;
    printf("Seu novo salario R$%6.2lf \n", salario);
    return 0;
}
