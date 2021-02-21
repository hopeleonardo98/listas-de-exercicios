/*  2.	Elabore um algoritmo que leia o valor de depósito e o valor 
    da taxa de juros, calcule e imprima o valor do rendimento e o 
    valor total depois do rendimento. */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

// Programa principal
int main(void){

    float deposito, taxaDeJuros;

    system("cls");
    printf("Digite o valor do deposito R$");
    scanf("%f", &deposito);
    printf("Valor da taxa de juros: ");
    scanf("%f", &taxaDeJuros);

    float valorTotal = deposito + calcularJuros(deposito, taxaDeJuros);

    printf("Valor do rendimento R$%0.2f \n", calcularJuros(deposito, taxaDeJuros));
    printf("Valor total depois do rendimento R$%0.2f \n", valorTotal);

    system("pause");
    system("cls");

    return 0;
}