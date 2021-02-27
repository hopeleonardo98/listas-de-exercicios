/*  17.	Elabore um algoritmo par ler o peso, a idade e a altura de m 
    pessoas, calcular e imprimir:
        a.  A soma de idade das pessoas com mais de 70 kg;
        b.  A quantidade de pessoas com mais de 50 anos;
        c.  A média de altura das pessoas que tem entre 15 e 35 anos 
            e possuem peso acima de 80kg;
        d.  O percentual de pessoas com mais de 65 anos e menos de 75 kg. */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

// Programa principal
int main(void){

    struct Pessoa *vPessoa = alocar();

    leitura(vPessoa);

    printf("A soma de idade das pessoas com mais de 70 kg: %d \n", funcaoA(vPessoa));
    printf("A quantidade de pessoas com mais de 50 anos: %d \n", funcaoB(vPessoa));
    printf("A media de altura das pessoas que tem entre 15 e 35 anos e possuem peso acima de 80kg: %0.2f \n", funcaoC(vPessoa));
    printf("O percentual de pessoas com mais de 65 anos e menos de 75 kg: %0.2f \n", funcaoD(vPessoa));

    liberarMemoria(vPessoa);

    system("pause");
    system("cls");
    
    return 0;
}