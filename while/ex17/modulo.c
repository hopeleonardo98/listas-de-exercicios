//  Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

struct Pessoa* alocar(){
    return (struct Pessoa*) malloc(qtdePessoas * sizeof(struct Pessoa));
}

void liberarMemoria(struct Pessoa *vPessoa){
    free(vPessoa);
}

void leitura(struct Pessoa *vPessoa){
    for(int i = 0; i < qtdePessoas; i++){
        system("cls");
        printf("Idade: ");
        scanf("%d", &(vPessoa +i)->idade);
        printf("Peso: ");
        scanf("%f", &(vPessoa +i)->peso);
        printf("Altura: ");
        scanf("%f", &(vPessoa +i)->altura);

    }system("cls");
}

unsigned int funcaoA(struct Pessoa *vPessoa){
    unsigned int soma = 0;

    for(int i = 0; i < qtdePessoas; i++){
        if(pesoMaiorQue(70, vPessoa, i))
            soma += (vPessoa +i)->idade;
    
    }return soma;
}

unsigned int funcaoB(struct Pessoa *vPessoa){
    unsigned int contador = 0;

    for(int i = 0; i < qtdePessoas; i++){
        if(idadeMaiorQue(50, vPessoa, i))
            contador += 1;
    
    }return contador;
}

float funcaoC(struct Pessoa *vPessoa){
    float soma = 0;
    unsigned int contador = 0;
  
    for(int i = 0; i < qtdePessoas; i++){
        if(idadeMaiorQue(15, vPessoa, i) && idadeMenorQue(35, vPessoa, i) && pesoMaiorQue(80, vPessoa, i)){
            soma += (vPessoa +i)->altura;
            contador += 1;
        }
    }return soma / contador;
}

float funcaoD(struct Pessoa *vPessoa){
    unsigned int contador = 0;

    for(int i = 0; i < qtdePessoas; i++){
        if(idadeMaiorQue(65, vPessoa, i) && pesoMenorQue(75, vPessoa, i))
            contador += 1;
    
    }return (contador / (float) qtdePessoas) * 100;
}

inline int idadeMaiorQue(unsigned int idade, struct Pessoa *vPessoa, unsigned int i){
    return (vPessoa +i)->idade > idade;
}

inline int idadeMenorQue(unsigned int idade, struct Pessoa *vPessoa, unsigned int i){
    return (vPessoa +i)->idade < idade;
}

inline int pesoMaiorQue(float peso, struct Pessoa *vPessoa, unsigned int i){
    return (vPessoa +i)->peso > peso;
}

inline int pesoMenorQue(float peso, struct Pessoa *vPessoa, unsigned int i){
    return (vPessoa +i)->peso < peso;
}