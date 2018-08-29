#ifndef FILA_H
#define FILA_H
#include "pessoa.h"


class fila
{
    private:

        int tamanho,final,init;
        pessoa** vetor;

    public:

        fila();
        bool settam(int);
        int gettam();
        bool enfileirar(pessoa*);
        pessoa* desenfileirar();
        bool vazia();

};

#endif // FILA_H
