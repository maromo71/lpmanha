//
// Created by Marcos Moraes on 02/09/24.
//
#include "inversor.h"
#include <string.h>
void inverterString(char * str){
    //aqui voce quebrar a cabeca
    int t = strlen(str);
    char copia[t];
    int i = 0, p = 0;
    for(i = t-1; i>= 0; i--){
        copia[p++] = str[i];
    }
    copia[p] = '\0';
    strcpy(str, copia);
}
