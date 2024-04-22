#include <stdio.h>
#include "fibo.h"
void generateFibonacci(int elements){
    int first = 1;
    int second = 1;
    int next = 0;

    for(int i=3; i<=elements; i++){
        next = first + second;
        printf("%d \n", next);
        first = second;
        second = next;
    }



}