
#include "screen.h"
#include <stdio.h>
#include <stdlib.h>

void montarMenu() {
    printf("Selecione a operacao desejada: \n");
    printf("[+] para somar: \n");
    printf("[-] para subtrair: \n");
    printf("[*] para multiplicar: \n");
    printf("[/] para dividr: \n");
    printf("[S] para SAIR DO SISTEMA \n");
}


void limparTela() {
#ifdef _WIN32 || _W64
    // Código para Windows
    system("cls");
#elif __linux__ || __APPLE__
    // Código para Linux ou macOS
    system("clear");
#else
    // Caso o sistema operacional não seja suportado
    printf("Sistema operacional nao suportado.\n");
#endif
}