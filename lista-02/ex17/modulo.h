#ifndef modulo_h
    #define modulo_h

    //  Constante do programa principal  
    #define qtdePessoas 8

    //  Estrutura
    struct Pessoa{
        unsigned int idade;
        float peso;
        float altura;
    };

    //  Cria um vetor do tamanho da constante qtdePessoas
    struct Pessoa* alocar();

    //  Libera a memoria alocada
    void liberarMemoria(struct Pessoa *vPessoa);

    //  Leitura do vetor de pessoas
    void leitura(struct Pessoa *vPessoa);

    //  A soma de idade das pessoas com mais de 70 kg
    unsigned int funcaoA(struct Pessoa *vPessoa);

    //  A quantidade de pessoas com mais de 50 anos
    unsigned int funcaoB(struct Pessoa *vPessoa);

    /*  A média de altura das pessoas que tem entre 15 e 35 anos e 
        possuem peso acima de 80kg */
    float funcaoC(struct Pessoa *vPessoa);

    //  O percentual de pessoas com mais de 65 anos e menos de 75 kg
    float funcaoD(struct Pessoa *vPessoa);

    //  Retorna verdadeiro ou falso
    inline int idadeMaiorQue(unsigned int idade, struct Pessoa *vPessoa, unsigned int i);

    //  Retorna verdadeiro ou falso
    inline int idadeMenorQue(unsigned int idade, struct Pessoa *vPessoa, unsigned int i);

    //  Retorna verdadeiro ou falso
    inline int pesoMaiorQue(float peso, struct Pessoa *vPessoa, unsigned int i);

    //  Retorna verdadeiro ou falso
    inline int pesoMenorQue(float peso, struct Pessoa *vPessoa, unsigned int i);

#endif