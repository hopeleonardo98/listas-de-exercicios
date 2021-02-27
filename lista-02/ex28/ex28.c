/*  28.	Faça um algoritmo que calcule e imprima o valor aproximando de Pi, 
    através dos 200 primeiro termos da série:   
        Pi= +(4/1) -(4/3) +(4/5) - (4/7)...   */

//  Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

//  Programa principal
int main(void){

    system("cls");

    printf("Valor aproximado de Pi %f \n", calcularPi());

    system("pause");
    system("cls");
    
    return 0;
}