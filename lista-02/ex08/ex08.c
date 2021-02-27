/*  8. Elabore um algoritmo que 50 calcule a soma dos primeiros 
    números pares. O programa não deve ler nenhum valor, supondo 
    que o primeiro valor par seja 2, temos 2, 4, 6, 8, 10, ...., 100 */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

// Programa principal
int main(void){

    system("cls");
    printf("A soma dos 50 primeiros numeros pares eh: ");
    printf("%d \n", somarValoresPares(50));
    system("pause");
    system("cls");

    return 0;
}