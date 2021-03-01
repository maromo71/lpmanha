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
    switch(sexo){
    case 'F':
    case 'f':
        salario *= 1.11;
        break;
    case 'M':
    case 'm':
        salario *= 1.10;
        break;
    default:
        printf("Sexo invalido \n");
        printf("Nao houve aumento \n");
    }
    printf("Seu novo salario R$%6.2lf \n", salario);
    return 0;
}
