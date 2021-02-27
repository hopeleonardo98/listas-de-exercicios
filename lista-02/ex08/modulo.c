#include "modulo.h"

int somarValoresPares(unsigned int quantidade){
    int numero = 0;
    int cont = 0;
    int soma = 0;

    while(1){
        numero += 2;
        soma += numero;
        cont += 1;

        if(cont == quantidade)
            break;
            
    }return soma;
}