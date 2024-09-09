#include <stdio.h>
int bissexto(int ano);
int validarData(int dia, int mes, int ano);
int main(void) {
    int dia, mes, ano;
    printf("Digite dia mes e ano, separado por espacos:\n");
    scanf("%d%d%d", &dia, &mes, &ano);
    int valido = validarData(dia, mes, ano);
    if(valido){
        printf("Data correta\n");
    }else{
        printf("Data incorreta\n");
    }
    return 0;
}

int validarData(int dia, int mes, int ano){
    if(mes > 12) return 0;
    if(mes==1 || mes==3
        || mes==5 || mes==7
        || mes==8 || mes==10
        || mes==12){
        if(dia > 31) return 0;
    }
    if(mes==2){
        int fev_teto = bissexto(ano) ? 29 : 28;
        if(dia > fev_teto) return 0;
    }
    if(mes==4 || mes==6 || mes==9 || mes==11){
        if(dia > 30) return 0;
    }
    return 1;
}

int bissexto(int ano){
    if(ano % 400==0) return 1;
    if(ano % 4==0){
        if(ano % 100==0) return 0;
        return 1;
    }
    return 0;
}
