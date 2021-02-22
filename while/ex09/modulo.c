#include "modulo.h"
#include <stdio.h>

void calcularMedia(float *vMedia, struct Aluno *vAluno, unsigned int tamanho){
    for(int i = 0; i < tamanho; i++)
        *(vMedia +i) += ((vAluno +i)->nota1 + (vAluno +i)->nota2) / qtdeNotas;
}

void imprimirMedia(float *vMedia, unsigned int tamanho){
    for(int i = 0; i < tamanho; i++)
        printf("Media do aluno[%d]: %0.2f \n", i, *(vMedia +i));
}