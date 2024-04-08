#include "fibo.h"
#include <stdio.h>
void generateFibonacci(int elementos){
    int first = 1;
    printf("[%d] ", first);
    int second = 1;
    printf("[%d] ", second);
    int cont = 3;
    int next = 0;
    do{
        next = first+second;
        printf("[%d] ", next);
        first=second;
        second=next;
        cont++;
    }while(cont<=elementos);
}
