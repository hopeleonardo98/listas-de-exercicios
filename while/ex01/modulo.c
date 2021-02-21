#include "modulo.h"

float calcularSalario(float salario){
    salario -= salario * IMPOSTO;
    salario += GRATIFICACAO;
    return salario;    
}