#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[] = "Pedro";
    char outro[] = "Tamares";

    int igual = strcmp(nome, outro);
    if(igual==0) {
        printf("Sao nomes iguais \n");
    }else{
        printf("Sao nomes diferentes \n");
        if(igual<0){
            printf("%s  e   %s \n", nome, outro);
        }else{
            printf("%s  e   %s \n", outro, nome);
        }
    }
    return 0;
}
