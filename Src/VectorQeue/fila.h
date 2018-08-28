#ifndef FILA_H
#define FILA_H


class fila
{
    private:
    {
        int tamanho,final,init;
        pessoa** vetor;
    }
    public:
    {
        fila();
        bool settam(int);
        int gettam(int);
        bool enfileirar(pessoa*);
        pessoa* desenfileirar();
        bool vazia();
    }
};

#endif // FILA_H
