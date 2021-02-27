#include "modulo.h"

float calcularPi(){
    unsigned const int numerador = 4;
    unsigned int denominador = 1;
    
    float pi = 0;

    for(int i = 0; i < 200; i++){
        if(i % 2 == 0)
            pi += (float) numerador / denominador;
        else
            pi -= (float) numerador / denominador;

        denominador += 2;
    
    }return pi;
}