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
    
    const int TAM = 5;

    struct Aluno *vAluno = (struct Aluno*) malloc(TAM * sizeof(struct Aluno));
    float *vMedia = (float*) calloc(TAM, sizeof(float));

    for(int i = 0; i < TAM; i++){
        system("cls");
        printf("Digite a primeira nota do aluno[%d]: ", i);
        scanf("%f", &(vAluno +i)->nota1);
        printf("Digite a segunda nota do aluno[%d]: ", i);
        scanf("%f", &(vAluno +i)->nota2);

    }system("cls");

    calcularMedia(vMedia, vAluno, TAM);
    imprimirMedia(vMedia, TAM);

    system("pause");
    system("cls");
    
    return 0;
}