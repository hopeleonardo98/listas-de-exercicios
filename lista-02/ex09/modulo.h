#ifndef modulo_h
    #define modulo_h

    // Estrutura
    struct Aluno{
        float nota1;
        float nota2;
        #define qtdeNotas 2
    };

    /*  Calcula a media de cada aluno em um vetor*/
    void calcularMedia(float *vMedia, struct Aluno *vAluno, unsigned int tamanho);

    // Imprime a media dos alunos
    void imprimirMedia(float *vMedia, unsigned int tamanho);

#endif