#include <stdio.h>
#include <stdlib.h>
/*
Laco infinito. Colocamos um break para quebrar
*/
int main()
{
    for(int i=0;; i++){
       char letra;
       letra = getchar();
       printf("%c", letra);
       if(letra=='f'){
            break;
       }
    }

    return 0;
}
