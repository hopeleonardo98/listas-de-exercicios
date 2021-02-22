// 14. Ler um valor x e determinar se ele é par ou impar

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

// Progrma principal
int main(void){

    int numero;

    system("cls");
    printf("Digite um numero: ");
    scanf("%d", &numero);
    system("cls");

    parOuImpar(numero)? printf("O numero eh PAR \n"):
                        printf("O numero eh IMPAR \n");

    system("pause");
    system("cls");

    return 0;
}