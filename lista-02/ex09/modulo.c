#include "modulo.h"
#include <stdio.h>
#include <stdlib.h>

void leitura(struct Aluno *vAluno){
    for(int i = 0; i < totalAluno; i++){
        system("cls");
        printf("Digite a primeira nota do aluno[%d]: ", i);
        scanf("%f", &(vAluno +i)->nota1);
        printf("Digite a segunda nota do aluno[%d]: ", i);
        scanf("%f", &(vAluno +i)->nota2);

    }system("cls");
}

void calcularMedia(float *vMedia, struct Aluno *vAluno){
    for(int i = 0; i < totalAluno; i++)
        *(vMedia +i) += ((vAluno +i)->nota1 + (vAluno +i)->nota2) / qtdeNotas;
}

void imprimirMedia(float *vMedia){
    for(int i = 0; i < totalAluno; i++)
        printf("Media do aluno[%d]: %0.2f \n", i, *(vMedia +i));
}