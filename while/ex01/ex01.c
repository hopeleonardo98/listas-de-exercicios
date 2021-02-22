/*  1. Elabore um algoritmo que receba o salário base de um funcionário,
    calcule e mostre o seu salário a receber, sabendo-se que esse 
    funcionário tem gratificação de R$50,00 e paga imposto de 10% 
    sobre o seu salário base */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

// Programa principal
int main(void){

    float salario;

    system("cls");
    printf("Salario R$");
    scanf("%f", &salario);
    system("cls");

    printf("Salario a receber R$%0.2f \n", calcularSalario(salario));

    system("pause");
    system("cls");

    return 0;
}