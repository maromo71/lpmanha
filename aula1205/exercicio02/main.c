#include <stdio.h>
#include <string.h>
int palindromo(char * palavra);
int main(void) {
    char *teste = "ana";
    if(palindromo(teste)){
        printf("Eh palindromo\n");
    }else {
        printf("Nao eh palindromo \n");
    }
    return 0;
}
int palindromo(char * palavra){
    int t = strlen(palavra);
    int flag =1;
    int ultima = t - 1; //posicao da ultima letra
    for(int i=0; i<t/2; i++){
        if(palavra[i]!=palavra[ultima]){
            flag = 0;
            break;
        }
        ultima--;
    }
    return flag;
}
