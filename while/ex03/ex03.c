/* 3. Elabore um algoritmo que calcule e imprima 
    a área de um círculo. Area= PI*r2 */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

// Programa principal
int main(void){

    float raio;

    system("cls");
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    printf("Area: %0.2f \n", calcularAreaCirculo(raio));

    system("pause");
    system("cls");  

    return 0;
}