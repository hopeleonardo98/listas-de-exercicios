/*  9. Elabore um algoritmo para ler 2 notas de 10 alunos. 
    Para cada aluno lido o algoritmo deve calcular e imprimir 
    a sua média final. Ao final o algoritmo deve imprimir a média 
    das médias finais dos 10 alunos. */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

// Programa principal
int main(void){

    struct Aluno *vAluno = (struct Aluno*) malloc(totalAluno * sizeof(struct Aluno));
    float *vMedia = (float*) calloc(totalAluno, sizeof(float));

    leitura(vAluno);

    calcularMedia(vMedia, vAluno);
    imprimirMedia(vMedia);

    system("pause");
    system("cls");
    
    return 0;
}