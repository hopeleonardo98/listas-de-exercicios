#ifndef modulo_h
    #define modulo_h

    #define totalAluno 2

    // Estrutura
    struct Aluno{
        float nota1;
        float nota2;
        #define qtdeNotas 2
    };

    //  Leitura do vetor de alunos
    void leitura(struct Aluno *vAluno);

    //  Calcula a media de cada aluno em um vetor
    void calcularMedia(float *vMedia, struct Aluno *vAluno);

    //  Imprime a media dos alunos
    void imprimirMedia(float *vMedia);

#endif