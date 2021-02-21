/*  4.	Elabore um algoritmo que receba o número de horas trabalhadas 
        e o valor do salário mínimo. Calcule e mostre o salário a receber 
        seguindo as seguintes regras: 
            •	a hora trabalhada vale a 15% do salário mínimo;
            •	o salário bruto equivale ao número de horas trabalhadas pelo 
                valor de hora trabalhada; 
            •	o imposto equivale a 3% do salário bruto; 
        •	o salário a receber equivale ao salário bruto menos o imposto. */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

int main(void){
    
    int horasTrabalhadas;
    float salarioMinimo;

    system("cls");
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);
    printf("Valor do salario minimo R$");
    scanf("%f", &salarioMinimo);

    

    return 0;
}