#include <stdio.h>
#include <stdlib.h>
/*

*/
int main(){
    int i;
    for(i=1; i<=20; i++){
        if(i%3==0){
             continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
