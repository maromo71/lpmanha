//
// Created by Marcos Moraes on 02/09/24.
//

#include "conversor.h"

double converterParaFah(double celsius){
    //F = (C × 9/5) + 32
    return (celsius * 9.0/5.0) + 32;
}

double converterParaCelsius(double fah){
    //C=(F-32)/1,8
    return (fah - 32) / 1.8;
}